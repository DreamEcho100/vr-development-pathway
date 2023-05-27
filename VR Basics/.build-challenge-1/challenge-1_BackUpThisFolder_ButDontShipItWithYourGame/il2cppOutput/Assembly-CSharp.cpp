﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem>
struct Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.Vector3>
struct Dictionary_2_tE019B631038D3AFABD85F603D5F9CA1C35C59FF0;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>>
struct Dictionary_2_tC5C84A32C9B20E8410708E4451B5D63451CC3856;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>>
struct LinkedPool_1_tC253D76E8F52E23D166062D7609A341C95911E17;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.TeleportingEventArgs>
struct LinkedPool_1_tFD19547E83A73032B4A40B358CC56822E879A467;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Video.VideoClip>
struct List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager>
struct List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct RegistrationList_1_t5B8AA175E254DFA1F9440925B6607DDCE1A48078;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct RegistrationList_1_t1AFBA9D926D100296ED3F61A8BE02BA1EDC23859;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Collider>
struct UnityEvent_1_t335D377DAE90CACA005C20ED055B3F9201EFAA72;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Collision>
struct UnityEvent_1_tB4FC3DD67F0E3B66746DE1028162920F6A30E4A4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26;
// UnityEngine.Events.UnityEvent`1<UnityEngine.MonoBehaviour>
struct UnityEvent_1_tCFEF3A01CCBD0C72AD71A275C5AD5F10E4BF652C;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable[]
struct IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Video.VideoClip[]
struct VideoClipU5BU5D_t280906F030F50822EA9106636084805768BACC32;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs
struct ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// ApplyPhysics
struct ApplyPhysics_tAE3C26379247A0E3445B10AD7C7472826A2E5D96;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D;
// UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable
struct BaseTeleportationInteractable_t3CA78AC694D6BFBA115E724F2C104AB069449AE8;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangeMaterial
struct ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578;
// ClockAnalogController
struct ClockAnalogController_t40F5B0B3950665151472CCF69C37672E0DCFA6FA;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ConvertValueToHue
struct ConvertValueToHue_tB4A10BD6779F1765FE66E59F8A9D555D49BCF24D;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CreateTrail
struct CreateTrail_tB6F4EA1F1960FDEAC10E34A27FEBBE560BA79690;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs
struct DeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DestroyObject
struct DestroyObject_t65B4BF80949DFEEAB0B8908FCBBD50C7C7A57585;
// DisplayFPS
struct DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// FadeCanvas
struct FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D;
// FadeCanvasOnOverlap
struct FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor
struct IXRHoverInteractor_tE2EF7002213610DA0D67421CFA21B1A95113BA61;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LaunchProjectile
struct LaunchProjectile_t9086561362C7884E1087EC08B8DFFE83942C1A75;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// LoadScene
struct LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B;
// LookAtPlayer
struct LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3;
// ManuallySelectObject
struct ManuallySelectObject_tABD8369DDA0D162EA1054765550650570BCDEF9E;
// MatchRotation
struct MatchRotation_t7C809963F833097235337A58F6BD74C0EBD2CAC7;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveWithVelocity
struct MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Notes
struct Notes_t58128F96D60B74E677002784BF6BFF4A03FEBDED;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OnButtonPress
struct OnButtonPress_t651453381FEBCE7C5A8FCC4119CDAECC6312C946;
// OnCollision
struct OnCollision_t3D87229F569874E3CAFB379073C9BAC60C9E68F6;
// OnJoystickMove
struct OnJoystickMove_tDCE4895D5B4A114B88E11EAFB293656CA5C42474;
// OnPull
struct OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229;
// OnSceneLoad
struct OnSceneLoad_t177EF5314CA12E1B72B882EB15A111D7A9A30BD2;
// OnTilt
struct OnTilt_t0BBC6BF26D4EE49C994CF142396AE9C76BA3EF23;
// OnTimedInterval
struct OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA;
// OnTrigger
struct OnTrigger_tEBBA6B78D0052F76B7320FF71C7130F99DF85A41;
// OnVelocity
struct OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayAnimation
struct PlayAnimation_tCCD8EE98B50E72DCDE8C989F6E646FFFDAA9879C;
// PlayContinuousSound
struct PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF;
// PlayQuickSound
struct PlayQuickSound_t26E807A873D4BDBEF9CF2BB1E64CEF0C0365FC7C;
// PlaySoundsFromList
struct PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E;
// PlayVideo
struct PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RemoveObjectsWithTag
struct RemoveObjectsWithTag_t602A70BDB91393734E2A341F8D847BBE66D10408;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// RotateObject
struct RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScaleObject
struct ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetInteractionLayer
struct SetInteractionLayer_t5E00392265D7B35E14F5BA8448FF93D8FC6E58C5;
// SetLightColor
struct SetLightColor_tF15F09A9B909AC351E0C1FEADCA6D41E12472892;
// SetLightIntensity
struct SetLightIntensity_t506002EEE8C224C0FC1774722D26BF14844C9BAE;
// SetMaterialColor
struct SetMaterialColor_t3AC40388F8FDAD9C4640B9A301CD8AB16D610CC3;
// SetParticleRate
struct SetParticleRate_tFD89152D0516428E5FA3A87B6615D15A80E8B04E;
// SetVolume
struct SetVolume_t63BBFEA842EFC9E6C86F0115CC7F0F861651981E;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// ShowMessageFromList
struct ShowMessageFromList_t2DD66CAD456F6C94361B4752CD0077BCEDB40CC5;
// SpawnFromList
struct SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E;
// SpawnObject
struct SpawnObject_tFA316A4796D54E7B4AA8F864CF81C88603D82CCF;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StickToObject
struct StickToObject_tF4A41799318685658F52E4F53329735CA17AFC7E;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TeleportAnchorWithFade
struct TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91;
// TeleportAreaWithFade
struct TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0;
// TeleportPlayer
struct TeleportPlayer_t7A369143DA5DD8DDBB94442E2A16ACC78543123A;
// UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor
struct TeleportationAnchor_t5C73F0B7F59911E6F9F98FA9156ECBC6E9DD9085;
// UnityEngine.XR.Interaction.Toolkit.TeleportationArea
struct TeleportationArea_t4E760401D8B7EBAA17DD75E248517C0ECBB608FD;
// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider
struct TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972;
// UnityEngine.XR.Interaction.Toolkit.TeleportingEvent
struct TeleportingEvent_t4E1A876F20936ECA7131A36859CDE044F8D93BCA;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ToggleInterface
struct ToggleInterface_tE052745A8F1E6F4F5655E77ED2530F47021C6FB1;
// ToggleLight
struct ToggleLight_tEB0DBED8FF45F484B5C0FE5705A9A92B2CF1B5E6;
// ToggleParticle
struct ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA;
// ToggleRay
struct ToggleRay_t56666DCAC4C4A9F240455653584F1AFB8FD21BC2;
// ToggleVisibility
struct ToggleVisibility_tB5D5A3B8249D279CE6AE6676D469B6FB335D34CF;
// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TranslateObject
struct TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0;
// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor
struct TriggerContactMonitor_t7534ED632C47D926F92937DE752DA2D4DC79AEA2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VibrateController
struct VibrateController_t0B6AA2FB712411E0534E2B3E82B679C04159C999;
// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// XRButton
struct XRButton_t1938DFED47393F1EF252576DFD379C6028D70566;
// UnityEngine.XR.Interaction.Toolkit.XRController
struct XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// XRJoystick
struct XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55;
// XRKnob
struct XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509;
// XRLever
struct XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76;
// XRSlider
struct XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC;
// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule
struct XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// ConvertValueToHue/ColorChangeEvent
struct ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4;
// DisplayFPS/<ShowFPS>d__11
struct U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// FadeCanvas/<FadeIn>d__13
struct U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E;
// FadeCanvas/<FadeOut>d__14
struct U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69;
// FadeCanvasOnOverlap/ValueChangeEvent
struct ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// OnCollision/CollisionEvent
struct CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB;
// OnJoystickMove/ValueChangeEvent
struct ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26;
// OnTilt/TiltEvent
struct TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223;
// OnTimedInterval/<IntervalRoutine>d__4
struct U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E;
// OnTrigger/TriggerEvent
struct TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747;
// OnVelocity/VelocityEvent
struct VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;
// XRJoystick/ValueChangeEvent
struct ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1;
// XRKnob/ValueChangeEvent
struct ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;
// XRSlider/ValueChangeEvent
struct ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral626EF77ABD00197B9E0E9015CCF21B7E2160F73F;
IL2CPP_EXTERN_C String_t* _stringLiteral9B4FEEFA76B93D58B6E47CD9FF76F6E287D0D321;
IL2CPP_EXTERN_C String_t* _stringLiteral9DFB335924F6E8DA7453E5E26AEF40C394666D86;
IL2CPP_EXTERN_C String_t* _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA;
IL2CPP_EXTERN_C String_t* _stringLiteralEDEAD402FE92E73D5555924E2FD2235479FCFF3E;
IL2CPP_EXTERN_C String_t* _stringLiteralF009B78A50F1102B3DC74DA0FAECC613AA75E457;
IL2CPP_EXTERN_C const RuntimeMethod* BaseTeleportationInteractable_OnActivated_m3519F32AD8EF48DEA2DC762AA0203AC2CA2BF9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseTeleportationInteractable_OnDeactivated_mCC3F748F7269D8A30EED80532E054CF274283D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseTeleportationInteractable_OnSelectEntered_m0FD58F8C469202E81555C08B4362E2D23B620676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseTeleportationInteractable_OnSelectExited_m104024A13FA59E4110738133C4FB571DB6607E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_m6B958DEC1174651AD374B68D4DAA338F700A9B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_m088F2113B7849794EAF31AF1D03D29BFDDC29316_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRController_t928E104C899E51FDE12C0A8AC68874587C46C28F_m125A78A2B11A8DC4E549B5275CFECD06A2B5B287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m18C7B725568F747CF4748CAAC4A8BC9036A4F329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_mCA867A56E93C824FB9C272E0DBB67655CB275941_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m985F72633850464A3301F658B9CD510F7ADCDC33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD989BBCBB7E44CA5FFDAB264CD4A443557B51E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3E0A847F4BD98D8476EEBA04F11F8AFBA671E646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisFadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D_m17C3D28827A6D3B527408B739346E8373F7650AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m249105716FAB344C4BEB0FA279A3E0BF6CF4F9FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OnButtonPress_Pressed_mEC23E35145372BAB3E6656D8CBCC3148D78C45AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OnButtonPress_Released_mC91A52436B519FE5C4FD018547333C5C4A80DB83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OnJoystickMove_OnValueChange_mC5C20F56B5A47CF0CE7324CFB844176E6E159F4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OnSceneLoad_PlayEvent_m5A1EDD0EF0357B2DC739D500BCAA257C28FAE3F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayVideo_ApplyVideoMaterial_m412B937CC12FF2564DE40321E2E7DD367CA7F1A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportAnchorWithFade_FadeSequence_TisActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E_mE9F327084376ACC7E5FF811A30AA1E62DAD63663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportAnchorWithFade_FadeSequence_TisDeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0_m6528AECE1A19812DE20A67A15022951AF44B9AD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportAnchorWithFade_FadeSequence_TisSelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938_m79AAC9D5BDF03F192486C139F781709C6967D3BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportAnchorWithFade_FadeSequence_TisSelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A_m4C65299DA254C53F5505B93CE718F9FF6777D28A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportAreaWithFade_FadeSequence_TisActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E_mD23F46521F677509CFBE8584B6D8C545BDA87D02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportAreaWithFade_FadeSequence_TisDeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0_m62B63A70E2F5ADC4A3C5DF65770C54BD55EC5A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportAreaWithFade_FadeSequence_TisSelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938_mDFFB0CC3FBC703AB69088585ECAF7375389F2AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportAreaWithFade_FadeSequence_TisSelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A_mC78D0C1265F7DB748F7E998491B5B29B6719C520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInU3Ed__13_System_Collections_IEnumerator_Reset_m8C8EA60D28D9085E1CDD627D7DD3D42E654F3250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutU3Ed__14_System_Collections_IEnumerator_Reset_m6B4836A7F39729C5718A0E79CDC7C85D463C4AE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIntervalRoutineU3Ed__4_System_Collections_IEnumerator_Reset_m4702AD573AD86829528B673CD8297445BB7B8CF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowFPSU3Ed__11_System_Collections_IEnumerator_Reset_m1E65B77CB5AFAF445C8E92C943451924C551F97E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m288CD64C3923EC3CCAD5D49C59DBE59B75F48AED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m9FD8C788E4BB7FA83567C4E1ABA07D56773E3B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m43205529F1412DD4AF9B2CA9A71E20F39AC9C3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC69A7D7C9B31012B413D4CBEAF78BD36498160C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDD85D3BD5692606F4DA08AEF04F83FD152CEA678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRButton_EndPress_m2B7C95F0865CA262D6FE898723F56DC837D864FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRButton_StartPress_mDFBACB020CB54BC7DA5344FD3D154BC1F88DBDB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRJoystick_EndGrab_m0ADBE5602A8BD5BDA9DACB0C856E3BC1A3EBA806_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRJoystick_StartGrab_mF705C804CC2D567AED6D74E3AA14A54FEFB90D8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRKnob_EndTurn_m30589F5F160CF523BC258814322B71FFD978FB8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRKnob_StartTurn_m47E313D03FF7E5FAE048F78D99437A5A02AA924E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLever_ApplyValue_mB14C33B075A9B44469A0EFC1B327409AA0EE53B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLever_EndGrab_m25CD10AAD752F660A680A9FB5E742010ACED4A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLever_StartGrab_mDD631CB649E741AE3890DDDC013F14A3147424B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSlider_EndGrab_mC6ECDF569E83191E3A0A49BE7AF2820201671262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSlider_StartGrab_m96607BF416E4719ABC4230DC02A0F3F0DC1935FB_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

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

// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Video.VideoClip>
struct List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VideoClipU5BU5D_t280906F030F50822EA9106636084805768BACC32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// DisplayFPS/<ShowFPS>d__11
struct U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E  : public RuntimeObject
{
	// System.Int32 DisplayFPS/<ShowFPS>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DisplayFPS/<ShowFPS>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DisplayFPS DisplayFPS/<ShowFPS>d__11::<>4__this
	DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* ___U3CU3E4__this_2;
};

// FadeCanvas/<FadeIn>d__13
struct U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E  : public RuntimeObject
{
	// System.Int32 FadeCanvas/<FadeIn>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FadeCanvas/<FadeIn>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FadeCanvas FadeCanvas/<FadeIn>d__13::<>4__this
	FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* ___U3CU3E4__this_2;
	// System.Single FadeCanvas/<FadeIn>d__13::duration
	float ___duration_3;
	// System.Single FadeCanvas/<FadeIn>d__13::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_4;
};

// FadeCanvas/<FadeOut>d__14
struct U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69  : public RuntimeObject
{
	// System.Int32 FadeCanvas/<FadeOut>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FadeCanvas/<FadeOut>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FadeCanvas FadeCanvas/<FadeOut>d__14::<>4__this
	FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* ___U3CU3E4__this_2;
	// System.Single FadeCanvas/<FadeOut>d__14::duration
	float ___duration_3;
	// System.Single FadeCanvas/<FadeOut>d__14::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_4;
};

// OnTimedInterval/<IntervalRoutine>d__4
struct U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E  : public RuntimeObject
{
	// System.Int32 OnTimedInterval/<IntervalRoutine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OnTimedInterval/<IntervalRoutine>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// OnTimedInterval OnTimedInterval/<IntervalRoutine>d__4::<>4__this
	OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Collider>
struct UnityEvent_1_t335D377DAE90CACA005C20ED055B3F9201EFAA72  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Collision>
struct UnityEvent_1_tB4FC3DD67F0E3B66746DE1028162920F6A30E4A4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.MonoBehaviour>
struct UnityEvent_1_tCFEF3A01CCBD0C72AD71A275C5AD5F10E4BF652C  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs
struct ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs
struct DeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
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

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____current_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.ContactPoint
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB  : public UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008
{
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832  : public UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26
{
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// UnityEngine.XR.Interaction.Toolkit.TeleportRequest
struct TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE 
{
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.TeleportRequest::destinationPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destinationPosition_0;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.TeleportRequest::destinationRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___destinationRotation_1;
	// System.Single UnityEngine.XR.Interaction.Toolkit.TeleportRequest::requestTime
	float ___requestTime_2;
	// UnityEngine.XR.Interaction.Toolkit.MatchOrientation UnityEngine.XR.Interaction.Toolkit.TeleportRequest::matchOrientation
	int32_t ___matchOrientation_3;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// ConvertValueToHue/ColorChangeEvent
struct ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4  : public UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9
{
};

// FadeCanvasOnOverlap/ValueChangeEvent
struct ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// OnCollision/CollisionEvent
struct CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB  : public UnityEvent_1_tB4FC3DD67F0E3B66746DE1028162920F6A30E4A4
{
};

// OnJoystickMove/ValueChangeEvent
struct ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// OnTilt/TiltEvent
struct TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223  : public UnityEvent_1_tCFEF3A01CCBD0C72AD71A275C5AD5F10E4BF652C
{
};

// OnTrigger/TriggerEvent
struct TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747  : public UnityEvent_1_t335D377DAE90CACA005C20ED055B3F9201EFAA72
{
};

// OnVelocity/VelocityEvent
struct VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF  : public UnityEvent_1_tCFEF3A01CCBD0C72AD71A275C5AD5F10E4BF652C
{
};

// XRJoystick/ValueChangeEvent
struct ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// XRKnob/ValueChangeEvent
struct ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// XRSlider/ValueChangeEvent
struct ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// ApplyPhysics
struct ApplyPhysics_tAE3C26379247A0E3445B10AD7C7472826A2E5D96  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody ApplyPhysics::rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidBody_4;
	// UnityEngine.CollisionDetectionMode ApplyPhysics::originalMode
	int32_t ___originalMode_5;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ChangeMaterial
struct ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ChangeMaterial::otherMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___otherMaterial_4;
	// System.Boolean ChangeMaterial::usingOther
	bool ___usingOther_5;
	// UnityEngine.MeshRenderer ChangeMaterial::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_6;
	// UnityEngine.Material ChangeMaterial::originalMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMaterial_7;
};

// ClockAnalogController
struct ClockAnalogController_t40F5B0B3950665151472CCF69C37672E0DCFA6FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ClockAnalogController::secondHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___secondHand_4;
	// UnityEngine.GameObject ClockAnalogController::minuteHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___minuteHand_5;
	// UnityEngine.GameObject ClockAnalogController::hourHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hourHand_6;
};

// ConvertValueToHue
struct ConvertValueToHue_tB4A10BD6779F1765FE66E59F8A9D555D49BCF24D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ConvertValueToHue::saturation
	float ___saturation_4;
	// System.Single ConvertValueToHue::value
	float ___value_5;
	// ConvertValueToHue/ColorChangeEvent ConvertValueToHue::OnColorChange
	ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4* ___OnColorChange_6;
};

// CreateTrail
struct CreateTrail_tB6F4EA1F1960FDEAC10E34A27FEBBE560BA79690  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CreateTrail::trailPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trailPrefab_4;
	// System.Single CreateTrail::width
	float ___width_5;
	// UnityEngine.Color CreateTrail::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_6;
	// UnityEngine.GameObject CreateTrail::currentTrail
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentTrail_7;
};

// DestroyObject
struct DestroyObject_t65B4BF80949DFEEAB0B8908FCBBD50C7C7A57585  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DestroyObject::lifeTime
	float ___lifeTime_4;
};

// DisplayFPS
struct DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DisplayFPS::updateInteval
	float ___updateInteval_6;
	// TMPro.TextMeshProUGUI DisplayFPS::textOutput
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textOutput_7;
	// System.Single DisplayFPS::deltaTime
	float ___deltaTime_8;
	// System.Single DisplayFPS::milliseconds
	float ___milliseconds_9;
	// System.Int32 DisplayFPS::framesPerSecond
	int32_t ___framesPerSecond_10;
};

// FadeCanvas
struct FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FadeCanvas::defaultDuration
	float ___defaultDuration_4;
	// UnityEngine.Coroutine FadeCanvas::<CurrentRoutine>k__BackingField
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___U3CCurrentRoutineU3Ek__BackingField_5;
	// UnityEngine.CanvasGroup FadeCanvas::canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___canvasGroup_6;
	// System.Single FadeCanvas::alpha
	float ___alpha_7;
	// System.Single FadeCanvas::quickFadeDuration
	float ___quickFadeDuration_8;
};

// FadeCanvasOnOverlap
struct FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FadeCanvasOnOverlap::checkDistance
	float ___checkDistance_4;
	// UnityEngine.LayerMask FadeCanvasOnOverlap::overlapMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___overlapMask_5;
	// FadeCanvasOnOverlap/ValueChangeEvent FadeCanvasOnOverlap::OnValueChange
	ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93* ___OnValueChange_6;
};

// LaunchProjectile
struct LaunchProjectile_t9086561362C7884E1087EC08B8DFFE83942C1A75  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LaunchProjectile::projectilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectilePrefab_4;
	// UnityEngine.Transform LaunchProjectile::startPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startPoint_5;
	// System.Single LaunchProjectile::launchSpeed
	float ___launchSpeed_6;
};

// LoadScene
struct LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::beginLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___beginLocomotion_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::endLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___endLocomotion_5;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::m_System
	LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* ___m_System_6;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionPhase UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::<locomotionPhase>k__BackingField
	int32_t ___U3ClocomotionPhaseU3Ek__BackingField_7;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::startLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___startLocomotion_8;
};

// LookAtPlayer
struct LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean LookAtPlayer::lookX
	bool ___lookX_4;
	// System.Boolean LookAtPlayer::lookY
	bool ___lookY_5;
	// System.Boolean LookAtPlayer::lookZ
	bool ___lookZ_6;
	// UnityEngine.GameObject LookAtPlayer::cameraObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cameraObject_7;
	// UnityEngine.Vector3 LookAtPlayer::originalRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalRotation_8;
};

// ManuallySelectObject
struct ManuallySelectObject_tABD8369DDA0D162EA1054765550650570BCDEF9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable ManuallySelectObject::interactable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___interactable_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor ManuallySelectObject::interactor
	XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* ___interactor_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager ManuallySelectObject::interactionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___interactionManager_6;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType ManuallySelectObject::originalTriggerType
	int32_t ___originalTriggerType_7;
};

// MatchRotation
struct MatchRotation_t7C809963F833097235337A58F6BD74C0EBD2CAC7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MatchRotation::matchX
	bool ___matchX_4;
	// System.Boolean MatchRotation::matchY
	bool ___matchY_5;
	// System.Boolean MatchRotation::matchZ
	bool ___matchZ_6;
	// UnityEngine.Transform MatchRotation::targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform_7;
	// UnityEngine.Vector3 MatchRotation::originalRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalRotation_8;
};

// MoveWithVelocity
struct MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MoveWithVelocity::speed
	float ___speed_4;
	// UnityEngine.Transform MoveWithVelocity::origin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___origin_5;
	// UnityEngine.Vector3 MoveWithVelocity::inputVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inputVelocity_6;
	// UnityEngine.Rigidbody MoveWithVelocity::rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidBody_7;
};

// Notes
struct Notes_t58128F96D60B74E677002784BF6BFF4A03FEBDED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Notes::notes
	String_t* ___notes_4;
};

// OnButtonPress
struct OnButtonPress_t651453381FEBCE7C5A8FCC4119CDAECC6312C946  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputAction OnButtonPress::action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action_4;
	// UnityEngine.Events.UnityEvent OnButtonPress::OnPress
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnPress_5;
	// UnityEngine.Events.UnityEvent OnButtonPress::OnRelease
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnRelease_6;
};

// OnCollision
struct OnCollision_t3D87229F569874E3CAFB379073C9BAC60C9E68F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OnCollision/CollisionEvent OnCollision::OnEnter
	CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB* ___OnEnter_4;
	// OnCollision/CollisionEvent OnCollision::OnExit
	CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB* ___OnExit_5;
};

// OnJoystickMove
struct OnJoystickMove_tDCE4895D5B4A114B88E11EAFB293656CA5C42474  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputAction OnJoystickMove::action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action_4;
	// OnJoystickMove/ValueChangeEvent OnJoystickMove::OnXValueChange
	ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26* ___OnXValueChange_5;
	// OnJoystickMove/ValueChangeEvent OnJoystickMove::OnYValueChange
	ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26* ___OnYValueChange_6;
};

// OnPull
struct OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OnPull::threshold
	float ___threshold_4;
	// UnityEngine.Events.UnityEvent OnPull::OnBegin
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnBegin_5;
	// UnityEngine.Events.UnityEvent OnPull::OnEnd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnEnd_6;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor OnPull::pullInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___pullInteractor_7;
	// UnityEngine.Vector3 OnPull::startPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPosition_8;
	// System.Boolean OnPull::withinThreshold
	bool ___withinThreshold_9;
};

// OnSceneLoad
struct OnSceneLoad_t177EF5314CA12E1B72B882EB15A111D7A9A30BD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent OnSceneLoad::OnLoad
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnLoad_4;
};

// OnTilt
struct OnTilt_t0BBC6BF26D4EE49C994CF142396AE9C76BA3EF23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OnTilt::threshold
	float ___threshold_4;
	// OnTilt/TiltEvent OnTilt::OnBegin
	TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223* ___OnBegin_5;
	// OnTilt/TiltEvent OnTilt::OnEnd
	TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223* ___OnEnd_6;
	// System.Boolean OnTilt::withinThreshold
	bool ___withinThreshold_7;
};

// OnTimedInterval
struct OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OnTimedInterval::minInterval
	float ___minInterval_4;
	// System.Single OnTimedInterval::maxInterval
	float ___maxInterval_5;
	// UnityEngine.Events.UnityEvent OnTimedInterval::OnIntervalElapsed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnIntervalElapsed_6;
};

// OnTrigger
struct OnTrigger_tEBBA6B78D0052F76B7320FF71C7130F99DF85A41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String OnTrigger::requiredTag
	String_t* ___requiredTag_4;
	// OnTrigger/TriggerEvent OnTrigger::OnEnter
	TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* ___OnEnter_5;
	// OnTrigger/TriggerEvent OnTrigger::OnExit
	TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* ___OnExit_6;
};

// OnVelocity
struct OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OnVelocity::beginThreshold
	float ___beginThreshold_4;
	// System.Single OnVelocity::endThreshold
	float ___endThreshold_5;
	// OnVelocity/VelocityEvent OnVelocity::OnBegin
	VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF* ___OnBegin_6;
	// OnVelocity/VelocityEvent OnVelocity::OnEnd
	VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF* ___OnEnd_7;
	// UnityEngine.Rigidbody OnVelocity::rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidBody_8;
	// System.Boolean OnVelocity::hasBegun
	bool ___hasBegun_9;
};

// PlayAnimation
struct PlayAnimation_tCCD8EE98B50E72DCDE8C989F6E646FFFDAA9879C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator PlayAnimation::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
};

// PlayContinuousSound
struct PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip PlayContinuousSound::sound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound_4;
	// System.Boolean PlayContinuousSound::playOnStart
	bool ___playOnStart_5;
	// System.Single PlayContinuousSound::volume
	float ___volume_6;
	// UnityEngine.AudioSource PlayContinuousSound::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_7;
	// UnityEngine.MonoBehaviour PlayContinuousSound::currentOwner
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___currentOwner_8;
};

// PlayQuickSound
struct PlayQuickSound_t26E807A873D4BDBEF9CF2BB1E64CEF0C0365FC7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip PlayQuickSound::sound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sound_4;
	// System.Single PlayQuickSound::volume
	float ___volume_5;
	// System.Single PlayQuickSound::randomPitchVariance
	float ___randomPitchVariance_6;
	// UnityEngine.AudioSource PlayQuickSound::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_7;
	// System.Single PlayQuickSound::defaultPitch
	float ___defaultPitch_8;
};

// PlaySoundsFromList
struct PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PlaySoundsFromList::shouldLoop
	bool ___shouldLoop_4;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> PlaySoundsFromList::audioClips
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ___audioClips_5;
	// UnityEngine.AudioSource PlaySoundsFromList::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_6;
	// System.Int32 PlaySoundsFromList::index
	int32_t ___index_7;
};

// PlayVideo
struct PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PlayVideo::playAtStart
	bool ___playAtStart_4;
	// UnityEngine.Material PlayVideo::videoMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___videoMaterial_5;
	// System.Collections.Generic.List`1<UnityEngine.Video.VideoClip> PlayVideo::videoClips
	List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* ___videoClips_6;
	// UnityEngine.Video.VideoPlayer PlayVideo::videoPlayer
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___videoPlayer_7;
	// UnityEngine.MeshRenderer PlayVideo::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_8;
	// System.Int32 PlayVideo::index
	int32_t ___index_9;
};

// RemoveObjectsWithTag
struct RemoveObjectsWithTag_t602A70BDB91393734E2A341F8D847BBE66D10408  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RotateObject
struct RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RotateObject::sensitivity
	float ___sensitivity_4;
	// System.Single RotateObject::speed
	float ___speed_5;
	// System.Boolean RotateObject::isRotating
	bool ___isRotating_6;
};

// ScaleObject
struct ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 ScaleObject::targetScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetScale_4;
	// UnityEngine.Vector3 ScaleObject::originalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalScale_5;
};

// SetInteractionLayer
struct SetInteractionLayer_t5E00392265D7B35E14F5BA8448FF93D8FC6E58C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask SetInteractionLayer::targetLayer
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___targetLayer_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor SetInteractionLayer::interactor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor_5;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask SetInteractionLayer::originalLayer
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___originalLayer_6;
};

// SetLightColor
struct SetLightColor_tF15F09A9B909AC351E0C1FEADCA6D41E12472892  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Light SetLightColor::currentLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___currentLight_4;
};

// SetLightIntensity
struct SetLightIntensity_t506002EEE8C224C0FC1774722D26BF14844C9BAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Light SetLightIntensity::currentLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___currentLight_4;
};

// SetMaterialColor
struct SetMaterialColor_t3AC40388F8FDAD9C4640B9A301CD8AB16D610CC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material SetMaterialColor::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_4;
};

// SetParticleRate
struct SetParticleRate_tFD89152D0516428E5FA3A87B6615D15A80E8B04E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem SetParticleRate::currentParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___currentParticleSystem_4;
};

// SetVolume
struct SetVolume_t63BBFEA842EFC9E6C86F0115CC7F0F861651981E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SetVolume::step
	float ___step_4;
	// UnityEngine.AudioSource SetVolume::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_5;
};

// ShowMessageFromList
struct ShowMessageFromList_t2DD66CAD456F6C94361B4752CD0077BCEDB40CC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI ShowMessageFromList::messageOutput
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___messageOutput_4;
	// UnityEngine.Events.UnityEvent ShowMessageFromList::OnComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnComplete_5;
	// System.Collections.Generic.List`1<System.String> ShowMessageFromList::messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___messages_6;
	// System.Int32 ShowMessageFromList::index
	int32_t ___index_7;
};

// SpawnFromList
struct SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnFromList::originalObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___originalObjects_4;
	// UnityEngine.Transform SpawnFromList::spawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPoint_5;
	// System.Boolean SpawnFromList::attachToSpawnPoint
	bool ___attachToSpawnPoint_6;
	// UnityEngine.GameObject SpawnFromList::currentObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentObject_7;
	// System.Int32 SpawnFromList::index
	int32_t ___index_8;
};

// SpawnObject
struct SpawnObject_tFA316A4796D54E7B4AA8F864CF81C88603D82CCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SpawnObject::originalObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___originalObject_4;
	// UnityEngine.Transform SpawnObject::spawnPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPosition_5;
};

// StickToObject
struct StickToObject_tF4A41799318685658F52E4F53329735CA17AFC7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TeleportPlayer
struct TeleportPlayer_t7A369143DA5DD8DDBB94442E2A16ACC78543123A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor TeleportPlayer::anchor
	TeleportationAnchor_t5C73F0B7F59911E6F9F98FA9156ECBC6E9DD9085* ___anchor_4;
	// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider TeleportPlayer::provider
	TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* ___provider_5;
};

// ToggleInterface
struct ToggleInterface_tE052745A8F1E6F4F5655E77ED2530F47021C6FB1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ToggleInterface::enableOnStart
	bool ___enableOnStart_4;
	// UnityEngine.Canvas ToggleInterface::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_5;
};

// ToggleLight
struct ToggleLight_tEB0DBED8FF45F484B5C0FE5705A9A92B2CF1B5E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ToggleLight::isOn
	bool ___isOn_4;
	// UnityEngine.Light ToggleLight::currentLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___currentLight_5;
};

// ToggleParticle
struct ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem ToggleParticle::currentParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___currentParticleSystem_4;
	// UnityEngine.MonoBehaviour ToggleParticle::currentOwner
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___currentOwner_5;
};

// ToggleRay
struct ToggleRay_t56666DCAC4C4A9F240455653584F1AFB8FD21BC2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ToggleRay::forceToggle
	bool ___forceToggle_4;
	// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor ToggleRay::directInteractor
	XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* ___directInteractor_5;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor ToggleRay::rayInteractor
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___rayInteractor_6;
	// System.Boolean ToggleRay::isSwitched
	bool ___isSwitched_7;
};

// ToggleVisibility
struct ToggleVisibility_tB5D5A3B8249D279CE6AE6676D469B6FB335D34CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Renderer ToggleVisibility::currentRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___currentRenderer_4;
};

// TranslateObject
struct TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 TranslateObject::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_4;
	// UnityEngine.Quaternion TranslateObject::startRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startRot_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VibrateController
struct VibrateController_t0B6AA2FB712411E0534E2B3E82B679C04159C999  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single VibrateController::strongVibrate
	float ___strongVibrate_4;
	// System.Single VibrateController::weakVibrate
	float ___weakVibrate_5;
	// UnityEngine.XR.Interaction.Toolkit.XRController VibrateController::controller
	XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* ___controller_6;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_5;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF* ___U3CgetDistanceOverrideU3Ek__BackingField_6;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_7;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_8;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_9;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_11;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_12;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_15;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_17;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_20;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_21;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_22;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsHovering>k__BackingField
	List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1* ___U3CinteractorsHoveringU3Ek__BackingField_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsSelecting>k__BackingField
	List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102* ___U3CinteractorsSelectingU3Ek__BackingField_25;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_26;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_27;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_31;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_32;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_33;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_34;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_39;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_40;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_41;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_42;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_43;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_44;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_45;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_7;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_11;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_14;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_15;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_16;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesHovered>k__BackingField
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___U3CinteractablesHoveredU3Ek__BackingField_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesSelected>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CinteractablesSelectedU3Ek__BackingField_22;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_23;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_24;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_25;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_26;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_27;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_28;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_29;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesHovered
	HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88* ___m_UnorderedInteractablesHovered_30;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesSelected
	HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF* ___m_UnorderedInteractablesSelected_31;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_32;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_33;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_35;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_39;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_40;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_41;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorRegistered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___interactorRegistered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorUnregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___interactorUnregistered_5;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableRegistered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___interactableRegistered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableUnregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___interactableUnregistered_7;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_8;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_9;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_10;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ColliderToInteractableMap
	Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5* ___m_ColliderToInteractableMap_13;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactors
	RegistrationList_1_t1AFBA9D926D100296ED3F61A8BE02BA1EDC23859* ___m_Interactors_14;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactables
	RegistrationList_1_t5B8AA175E254DFA1F9440925B6607DDCE1A48078* ___m_Interactables_15;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentHovered
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___m_CurrentHovered_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentSelected
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___m_CurrentSelected_17;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HighestPriorityTargetMap
	Dictionary_2_tC5C84A32C9B20E8410708E4451B5D63451CC3856* ___m_HighestPriorityTargetMap_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_20;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_UnorderedValidTargets
	HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* ___m_UnorderedValidTargets_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_DeprecatedValidTargets
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___m_DeprecatedValidTargets_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractors
	List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* ___m_ScratchInteractors_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractables
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ScratchInteractables_24;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectEnterEventArgs
	LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67* ___m_SelectEnterEventArgs_25;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectExitEventArgs
	LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62* ___m_SelectExitEventArgs_26;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverEnterEventArgs
	LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD* ___m_HoverEnterEventArgs_27;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverExitEventArgs
	LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F* ___m_HoverExitEventArgs_28;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorRegisteredEventArgs
	LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F* ___m_InteractorRegisteredEventArgs_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorUnregisteredEventArgs
	LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0* ___m_InteractorUnregisteredEventArgs_30;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableRegisteredEventArgs
	LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B* ___m_InteractableRegisteredEventArgs_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableUnregisteredEventArgs
	LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE* ___m_InteractableUnregisteredEventArgs_32;
};

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701* ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;
};

// UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable
struct BaseTeleportationInteractable_t3CA78AC694D6BFBA115E724F2C104AB069449AE8  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::m_TeleportationProvider
	TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* ___m_TeleportationProvider_47;
	// UnityEngine.XR.Interaction.Toolkit.MatchOrientation UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::m_MatchOrientation
	int32_t ___m_MatchOrientation_48;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::m_MatchDirectionalInput
	bool ___m_MatchDirectionalInput_49;
	// UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable/TeleportTrigger UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::m_TeleportTrigger
	int32_t ___m_TeleportTrigger_50;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::m_FilterSelectionByHitNormal
	bool ___m_FilterSelectionByHitNormal_51;
	// System.Single UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::m_UpNormalToleranceDegrees
	float ___m_UpNormalToleranceDegrees_52;
	// UnityEngine.XR.Interaction.Toolkit.TeleportingEvent UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::m_Teleporting
	TeleportingEvent_t4E1A876F20936ECA7131A36859CDE044F8D93BCA* ___m_Teleporting_53;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.TeleportingEventArgs> UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::m_TeleportingEventArgs
	LinkedPool_1_tFD19547E83A73032B4A40B358CC56822E879A467* ___m_TeleportingEventArgs_54;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.Vector3> UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::m_TeleportForwardPerInteractor
	Dictionary_2_tE019B631038D3AFABD85F603D5F9CA1C35C59FF0* ___m_TeleportForwardPerInteractor_55;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider
struct TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972  : public LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B
{
	// UnityEngine.XR.Interaction.Toolkit.TeleportRequest UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::<currentRequest>k__BackingField
	TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE ___U3CcurrentRequestU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::<validRequest>k__BackingField
	bool ___U3CvalidRequestU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::m_DelayTime
	float ___m_DelayTime_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::m_HasExclusiveLocomotion
	bool ___m_HasExclusiveLocomotion_12;
	// System.Single UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::m_TimeStarted
	float ___m_TimeStarted_13;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_42;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_43;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_44;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_45;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_46;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_47;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_48;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_49;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_50;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_51;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_52;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_53;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_54;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_55;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_56;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_57;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_58;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_59;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_60;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_62;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_63;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_65;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_66;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_67;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_68;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_69;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_71;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_72;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_73;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_74;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_75;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_77;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_78;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_79;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_80;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_85;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_86;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_87;
};

// XRButton
struct XRButton_t1938DFED47393F1EF252576DFD379C6028D70566  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform XRButton::buttonTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___buttonTransform_46;
	// System.Single XRButton::pressDistance
	float ___pressDistance_47;
	// UnityEngine.Events.UnityEvent XRButton::OnPress
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnPress_48;
	// UnityEngine.Events.UnityEvent XRButton::OnRelease
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnRelease_49;
	// System.Single XRButton::yMin
	float ___yMin_50;
	// System.Single XRButton::yMax
	float ___yMax_51;
	// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor XRButton::hoverInteractor
	RuntimeObject* ___hoverInteractor_52;
	// System.Single XRButton::hoverHeight
	float ___hoverHeight_53;
	// System.Single XRButton::startHeight
	float ___startHeight_54;
	// System.Boolean XRButton::previousPress
	bool ___previousPress_55;
};

// UnityEngine.XR.Interaction.Toolkit.XRController
struct XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	// UnityEngine.XR.XRNode UnityEngine.XR.Interaction.Toolkit.XRController::m_ControllerNode
	int32_t ___m_ControllerNode_24;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_SelectUsage
	int32_t ___m_SelectUsage_25;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_ActivateUsage
	int32_t ___m_ActivateUsage_26;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_UIPressUsage
	int32_t ___m_UIPressUsage_27;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRController::m_AxisToPressThreshold
	float ___m_AxisToPressThreshold_28;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_RotateAnchorLeft
	int32_t ___m_RotateAnchorLeft_29;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_RotateAnchorRight
	int32_t ___m_RotateAnchorRight_30;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_MoveObjectIn
	int32_t ___m_MoveObjectIn_31;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_MoveObjectOut
	int32_t ___m_MoveObjectOut_32;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Axis2D UnityEngine.XR.Interaction.Toolkit.XRController::m_DirectionalAnchorRotation
	int32_t ___m_DirectionalAnchorRotation_33;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.XR.Interaction.Toolkit.XRController::m_PoseProvider
	BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* ___m_PoseProvider_34;
	// UnityEngine.XR.InputDevice UnityEngine.XR.Interaction.Toolkit.XRController::m_InputDevice
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice_35;
};

// XRJoystick
struct XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// System.Single XRJoystick::rateOfChange
	float ___rateOfChange_46;
	// XRJoystick/JoystickType XRJoystick::leverType
	int32_t ___leverType_47;
	// UnityEngine.Transform XRJoystick::handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___handle_48;
	// XRJoystick/ValueChangeEvent XRJoystick::OnXValueChange
	ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1* ___OnXValueChange_49;
	// XRJoystick/ValueChangeEvent XRJoystick::OnYValueChange
	ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1* ___OnYValueChange_50;
	// UnityEngine.Vector2 XRJoystick::<Value>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CValueU3Ek__BackingField_51;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor XRJoystick::selectInteractor
	RuntimeObject* ___selectInteractor_52;
	// UnityEngine.Vector3 XRJoystick::initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPosition_53;
	// System.Int32 XRJoystick::minRotation
	int32_t ___minRotation_54;
	// System.Int32 XRJoystick::maxRotation
	int32_t ___maxRotation_55;
};

// XRKnob
struct XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform XRKnob::knobTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___knobTransform_46;
	// System.Single XRKnob::minimum
	float ___minimum_47;
	// System.Single XRKnob::maximum
	float ___maximum_48;
	// System.Single XRKnob::defaultValue
	float ___defaultValue_49;
	// XRKnob/ValueChangeEvent XRKnob::OnValueChange
	ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC* ___OnValueChange_50;
	// System.Single XRKnob::<Value>k__BackingField
	float ___U3CValueU3Ek__BackingField_51;
	// System.Single XRKnob::<Angle>k__BackingField
	float ___U3CAngleU3Ek__BackingField_52;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor XRKnob::selectInteractor
	RuntimeObject* ___selectInteractor_53;
	// UnityEngine.Quaternion XRKnob::selectRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___selectRotation_54;
};

// XRLever
struct XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform XRLever::handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___handle_46;
	// System.Boolean XRLever::defaultValue
	bool ___defaultValue_47;
	// UnityEngine.Events.UnityEvent XRLever::OnLeverActivate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnLeverActivate_48;
	// UnityEngine.Events.UnityEvent XRLever::OnLeverDeactivate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnLeverDeactivate_49;
	// System.Boolean XRLever::<Value>k__BackingField
	bool ___U3CValueU3Ek__BackingField_50;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor XRLever::selectInteractor
	RuntimeObject* ___selectInteractor_51;
};

// XRSlider
struct XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform XRSlider::handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___handle_46;
	// UnityEngine.Transform XRSlider::start
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___start_47;
	// UnityEngine.Transform XRSlider::end
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___end_48;
	// System.Single XRSlider::defaultValue
	float ___defaultValue_49;
	// XRSlider/ValueChangeEvent XRSlider::OnValueChange
	ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275* ___OnValueChange_50;
	// System.Single XRSlider::<Value>k__BackingField
	float ___U3CValueU3Ek__BackingField_51;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor XRSlider::selectInteractor
	RuntimeObject* ___selectInteractor_52;
	// UnityEngine.Vector3 XRSlider::selectPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___selectPosition_53;
	// System.Single XRSlider::startingValue
	float ___startingValue_54;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor
struct TeleportationAnchor_t5C73F0B7F59911E6F9F98FA9156ECBC6E9DD9085  : public BaseTeleportationInteractable_t3CA78AC694D6BFBA115E724F2C104AB069449AE8
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor::m_TeleportAnchorTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_TeleportAnchorTransform_56;
};

// UnityEngine.XR.Interaction.Toolkit.TeleportationArea
struct TeleportationArea_t4E760401D8B7EBAA17DD75E248517C0ECBB608FD  : public BaseTeleportationInteractable_t3CA78AC694D6BFBA115E724F2C104AB069449AE8
{
};

// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::<unsortedValidTargets>k__BackingField
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___U3CunsortedValidTargetsU3Ek__BackingField_88;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_StayedColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_StayedColliders_89;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_TriggerContactMonitor
	TriggerContactMonitor_t7534ED632C47D926F92937DE752DA2D4DC79AEA2* ___m_TriggerContactMonitor_90;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_94;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_95;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_96;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_97;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_98;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_99;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_100;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_101;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_102;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_103;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_104;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_105;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_106;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_107;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_108;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_110;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_111;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_112;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_113;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_114;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_115;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_116;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_117;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AnchorRotateReferenceFrame_118;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotationMode
	int32_t ___m_AnchorRotationMode_119;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_120;
	// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_InputModule
	XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0* ___m_InputModule_121;
	// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredInputModule
	XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0* ___m_RegisteredInputModule_122;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_CurrentNearestObject
	RuntimeObject* ___m_CurrentNearestObject_123;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_124;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_125;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_126;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_127;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D* ___m_RaycastHitComparer_128;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___m_SamplePoints_129;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_130;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_131;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_132;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ControlPoints_133;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_HitChordControlPoints_134;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_137;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TeleportAnchorWithFade
struct TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91  : public TeleportationAnchor_t5C73F0B7F59911E6F9F98FA9156ECBC6E9DD9085
{
	// FadeCanvas TeleportAnchorWithFade::fadeCanvas
	FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* ___fadeCanvas_57;
};

// TeleportAreaWithFade
struct TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0  : public TeleportationArea_t4E760401D8B7EBAA17DD75E248517C0ECBB608FD
{
	// FadeCanvas TeleportAreaWithFade::fadeCanvas
	FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* ___fadeCanvas_56;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.AudioClip>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// System.Collections.Generic.List`1<UnityEngine.Video.VideoClip>
struct List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VideoClipU5BU5D_t280906F030F50822EA9106636084805768BACC32* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Video.VideoClip>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// DisplayFPS/<ShowFPS>d__11

// DisplayFPS/<ShowFPS>d__11

// FadeCanvas/<FadeIn>d__13

// FadeCanvas/<FadeIn>d__13

// FadeCanvas/<FadeOut>d__14

// FadeCanvas/<FadeOut>d__14

// OnTimedInterval/<IntervalRoutine>d__4

// OnTimedInterval/<IntervalRoutine>d__4

// UnityEngine.Events.UnityEvent`1<UnityEngine.Collider>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Collider>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Collision>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Collision>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.MonoBehaviour>

// UnityEngine.Events.UnityEvent`1<UnityEngine.MonoBehaviour>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs

// UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs

// UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs

// System.Double

// System.Double

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.ParticleSystem/EmissionModule

// UnityEngine.ParticleSystem/EmissionModule

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.ParticleSystem/MinMaxCurve

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.ContactPoint

// UnityEngine.ContactPoint

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent

// UnityEngine.XR.Interaction.Toolkit.TeleportRequest

// UnityEngine.XR.Interaction.Toolkit.TeleportRequest

// ConvertValueToHue/ColorChangeEvent

// ConvertValueToHue/ColorChangeEvent

// FadeCanvasOnOverlap/ValueChangeEvent

// FadeCanvasOnOverlap/ValueChangeEvent

// OnCollision/CollisionEvent

// OnCollision/CollisionEvent

// OnJoystickMove/ValueChangeEvent

// OnJoystickMove/ValueChangeEvent

// OnTilt/TiltEvent

// OnTilt/TiltEvent

// OnTrigger/TriggerEvent

// OnTrigger/TriggerEvent

// OnVelocity/VelocityEvent

// OnVelocity/VelocityEvent

// XRJoystick/ValueChangeEvent

// XRJoystick/ValueChangeEvent

// XRKnob/ValueChangeEvent

// XRKnob/ValueChangeEvent

// XRSlider/ValueChangeEvent

// XRSlider/ValueChangeEvent

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Video.VideoClip

// UnityEngine.Video.VideoClip

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Video.VideoPlayer/EventHandler

// UnityEngine.Video.VideoPlayer/EventHandler

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.Light

// UnityEngine.Light

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.TrailRenderer

// UnityEngine.TrailRenderer

// UnityEngine.Video.VideoPlayer

// UnityEngine.Video.VideoPlayer

// ApplyPhysics

// ApplyPhysics

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// ChangeMaterial

// ChangeMaterial

// ClockAnalogController

// ClockAnalogController

// ConvertValueToHue

// ConvertValueToHue

// CreateTrail

// CreateTrail

// DestroyObject

// DestroyObject

// DisplayFPS

// DisplayFPS

// FadeCanvas

// FadeCanvas

// FadeCanvasOnOverlap

// FadeCanvasOnOverlap

// LaunchProjectile

// LaunchProjectile

// LoadScene

// LoadScene

// LookAtPlayer

// LookAtPlayer

// ManuallySelectObject

// ManuallySelectObject

// MatchRotation

// MatchRotation

// MoveWithVelocity

// MoveWithVelocity

// Notes

// Notes

// OnButtonPress

// OnButtonPress

// OnCollision

// OnCollision

// OnJoystickMove

// OnJoystickMove

// OnPull

// OnPull

// OnSceneLoad

// OnSceneLoad

// OnTilt

// OnTilt

// OnTimedInterval

// OnTimedInterval

// OnTrigger

// OnTrigger

// OnVelocity

// OnVelocity

// PlayAnimation

// PlayAnimation

// PlayContinuousSound

// PlayContinuousSound

// PlayQuickSound

// PlayQuickSound

// PlaySoundsFromList

// PlaySoundsFromList

// PlayVideo

// PlayVideo

// RemoveObjectsWithTag

// RemoveObjectsWithTag

// RotateObject

// RotateObject

// ScaleObject

// ScaleObject

// SetInteractionLayer

// SetInteractionLayer

// SetLightColor

// SetLightColor

// SetLightIntensity

// SetLightIntensity

// SetMaterialColor

// SetMaterialColor

// SetParticleRate

// SetParticleRate

// SetVolume

// SetVolume

// ShowMessageFromList

// ShowMessageFromList

// SpawnFromList

// SpawnFromList

// SpawnObject

// SpawnObject

// StickToObject

// StickToObject

// TeleportPlayer

// TeleportPlayer

// ToggleInterface

// ToggleInterface

// ToggleLight

// ToggleLight

// ToggleParticle

// ToggleParticle

// ToggleRay

// ToggleRay

// ToggleVisibility

// ToggleVisibility

// TranslateObject

// TranslateObject

// VibrateController

// VibrateController

// UnityEngine.XR.Interaction.Toolkit.XRBaseController

// UnityEngine.XR.Interaction.Toolkit.XRBaseController

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_35;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_34;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor

// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::<activeInteractionManagers>k__BackingField
	List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B* ___U3CactiveInteractionManagersU3Ek__BackingField_12;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_TargetPriorityInteractorListPool
	LinkedPool_1_tC253D76E8F52E23D166062D7609A341C95911E17* ___s_TargetPriorityInteractorListPool_19;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_PreprocessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_PreprocessInteractorsMarker_33;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractorsMarker_34;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractablesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractablesMarker_35;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_GetValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_GetValidTargetsMarker_36;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_FilterRegisteredValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_FilterRegisteredValidTargetsMarker_37;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidSelectionsMarker_38;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidHoversMarker_39;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidSelectionsMarker_40;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidHoversMarker_41;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectEnterMarker_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectExitMarker_43;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverEnterMarker_44;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverExitMarker_45;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystems_13;
};

// Unity.XR.CoreUtils.XROrigin

// UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable

// UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider

// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_82;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor

// XRButton

// XRButton

// UnityEngine.XR.Interaction.Toolkit.XRController

// UnityEngine.XR.Interaction.Toolkit.XRController

// XRJoystick

// XRJoystick

// XRKnob

// XRKnob

// XRLever

// XRLever

// XRSlider

// XRSlider

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.Dropdown

// UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor

// UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor

// UnityEngine.XR.Interaction.Toolkit.TeleportationArea

// UnityEngine.XR.Interaction.Toolkit.TeleportationArea

// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B_StaticFields
{
	// UnityEngine.WaitForFixedUpdate UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::s_WaitForFixedUpdate
	WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* ___s_WaitForFixedUpdate_91;
};

// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_Results
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___s_Results_88;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___s_ScratchSamplePoints_135;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_ScratchControlPoints_136;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TeleportAnchorWithFade

// TeleportAnchorWithFade

// TeleportAreaWithFade

// TeleportAreaWithFade

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___0_arg0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TeleportAnchorWithFade::FadeSequence<System.Object>(UnityEngine.Events.UnityAction`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportAnchorWithFade_FadeSequence_TisRuntimeObject_mA5EF2D0F3BC4890A2302AC0414119B2A5749B6AE_gshared (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_action, RuntimeObject* ___1_args, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TeleportAreaWithFade::FadeSequence<System.Object>(UnityEngine.Events.UnityAction`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportAreaWithFade_FadeSequence_TisRuntimeObject_m07F1D4F6B9B0047F4F07BE59D2700C745481843C_gshared (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_action, RuntimeObject* ___1_args, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, float ___2_repeatRate, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.CollisionDetectionMode UnityEngine.Rigidbody::get_collisionDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rigidbody_get_collisionDetectionMode_m5A18E2DE70F4C37841300A34A183FF3ADE01D943 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___0_H, float ___1_S, float ___2_V, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
inline void UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_gshared)(__this, ___0_arg0, method);
}
// System.Void ConvertValueToHue/ColorChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChangeEvent__ctor_m26B85FD37308531FB96419E86EABE54EF01A1E40 (ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
inline void UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, const RuntimeMethod*))UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___0_original, ___1_position, ___2_rotation, ___3_parent, method);
}
// System.Void CreateTrail::ApplySettings(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateTrail_ApplySettings_m5EA288618E7B0937E058DE360E8DD46BD2469143 (CreateTrail_tB6F4EA1F1960FDEAC10E34A27FEBBE560BA79690* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_trailObject, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.TrailRenderer>()
inline TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.TrailRenderer::set_widthMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_widthMultiplier_m3362BDEED1C1AEF9AEDB9862D69FA48676A09F83 (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_startColor_m1474AFF43F59009D38FF4EF933ACBEE6D54FA016 (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_endColor_m392013339F5C6151B900C76FF8D2D80F1B0F20BE (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FadeCanvas::FadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeCanvas_FadeIn_m81AFFB3D7884B1CF7DE8388961E8B826C4C20170 (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, float ___0_duration, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void FadeCanvas::set_CurrentRoutine(UnityEngine.Coroutine)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FadeCanvas_set_CurrentRoutine_m27241B5B956B0E4C67D7E939C5D523AFB3A9B780_inline (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FadeCanvas::FadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeCanvas_FadeOut_m3B13723239FEAFA1B4C06F65831D21BD3631A5B0 (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, float ___0_duration, const RuntimeMethod* method) ;
// System.Void FadeCanvas/<FadeIn>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__13__ctor_mB46FA71E7829A3EF69D94A4B85847AC3EF508BD1 (U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void FadeCanvas/<FadeOut>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__14__ctor_m54EC2481B8DC3171E0DF898C9C862CF45C84ACB0 (U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void FadeCanvas::SetAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvas_SetAlpha_mCA35CC5EBE735C0A4953627E6EFC70855CD8A647 (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void FadeCanvasOnOverlap::CheckOverlap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvasOnOverlap_CheckOverlap_mF4D02F5AD241B6D93C200B15DB67D82EEE8D9423 (FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_m348CF43E53C703DEF4A6780A3B9DE2A1FB958318 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Vector3> FadeCanvasOnOverlap::GetColliderBounds(UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* FadeCanvasOnOverlap_GetColliderBounds_m9338E04A31437EB992F6F844E65B8736061FBA9E (FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___0_colliders, const RuntimeMethod* method) ;
// System.Single FadeCanvasOnOverlap::FindClosestPoint(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FadeCanvasOnOverlap_FindClosestPoint_m066816B84309815C5AABDC35787D8A362B20ABE4 (FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_closestPoints, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___0_arg0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
inline Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
inline void Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6 (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared)(__this, method);
}
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// System.Void FadeCanvasOnOverlap/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mDE940C343983F3B6CDC1B2E7DEBB002E3F8EDEF5 (ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, const RuntimeMethod*))UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.Rigidbody>(T&)
inline bool GameObject_TryGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_mCA867A56E93C824FB9C272E0DBB67655CB275941 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
// System.Void LaunchProjectile::ApplyForce(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchProjectile_ApplyForce_m777D368DB500D7BD9EB98B49AF3BEDDE35B5B8F1 (LaunchProjectile_t9086561362C7884E1087EC08B8DFFE83942C1A75* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_rigidBody, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Unity.XR.CoreUtils.XROrigin>()
inline XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m249105716FAB344C4BEB0FA279A3E0BF6CF4F9FE (const RuntimeMethod* method)
{
	return ((  XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void LookAtPlayer::LookAt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer_LookAt_mF417AC423E36525A5B5D7933DFE09948BA27E84C (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor>()
inline XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* Component_GetComponent_TisXRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_m6B958DEC1174651AD374B68D4DAA338F700A9B6C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_interactionManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* XRBaseInteractor_get_interactionManager_mD7FB7431097431DD95D2333E58A5052DF106E09F_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::get_selectActionTrigger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRBaseControllerInteractor_get_selectActionTrigger_mCB494C7BA0CBE50A36F058E35AA3AC521C9D2010_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::set_selectActionTrigger(UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseControllerInteractor_set_selectActionTrigger_mED28C90236E93293019D4F9132AA5C3447861A88_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void MoveWithVelocity::ApplyVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithVelocity_ApplyVelocity_mE87B4D10AFBF0A9D659C715CA3DF42C247397020 (MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void PlayContinuousSound::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_Play_m99DB632976F663760E285DA8A0E838288F2BFE77 (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void PlayContinuousSound::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_Pause_mB41628A030E1BE7B30A83EAF9EF58B8BA1DF2C0C (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) ;
// System.Boolean PlayContinuousSound::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayContinuousSound_IsPlaying_mF9BCCFF25ABB399CF1B003F7E145134617B58279 (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) ;
// System.Void PlayContinuousSound::SetPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_SetPlay_m376F3113B0BCF6EE9F1114CC3D13376C4116E745 (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, bool ___0_playAudio, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, float ___1_volumeScale, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Count()
inline int32_t List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void PlaySoundsFromList::PlayClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_PlayClip_mE5491DBA1BDC6A5A174710189B0981D5015CB434 (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___0_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Item(System.Int32)
inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53 (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioClip>::.ctor()
inline void List_1__ctor_m985F72633850464A3301F658B9CD510F7ADCDC33 (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Video.VideoClip>::get_Count()
inline int32_t List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_inline (List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Video.VideoClip>::get_Item(System.Int32)
inline VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* List_1_get_Item_m3E0A847F4BD98D8476EEBA04F11F8AFBA671E646 (List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* (*) (List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mFCF62E0BB29DD3D2B2F1306BD8657E374CF60903 (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::add_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_prepareCompleted_m4DB8843A3E3E3CFF7E361E70EA51983AF457183B (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::remove_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_prepareCompleted_mDA77FE81F97195666D407DBB5689F8289A0513DF (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) ;
// System.Void PlayVideo::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_Play_m618D7CB762D3B48A5A736DB664C0AB04DF841EB6 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) ;
// System.Void PlayVideo::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_Stop_m81FE1707CC9ED5438A8F4A38A078A9991E5FFA8C (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void PlayVideo::SetPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_SetPlay_mB01090239CE7C7F6CE7FBF2A64E2336DFCD9CF41 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Video.VideoClip>::.ctor()
inline void List_1__ctor_mD989BBCBB7E44CA5FFDAB264CD4A443557B51E7A (List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void RotateObject::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_Begin_mA6F7360BEBCDB4741326EC7213B6BF8C1CA4669E (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) ;
// System.Void RotateObject::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_End_m6FC122D48DFFFE24D5BD3DE5F2652782EA5E381E (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) ;
// System.Void RotateObject::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_Rotate_m5114C557725C3020E7AF30058082C463134B80D9 (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>()
inline XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* Component_GetComponent_TisXRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_m088F2113B7849794EAF31AF1D03D29BFDDC29316 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_interactionLayers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 XRBaseInteractor_get_interactionLayers_m83DCB38A70922078AEBD323EBD7EDBEB6A70D00D_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::set_interactionLayers(UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseInteractor_set_interactionLayers_mA988AF491A54DB866194C07D5E374780543B77D8_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___0_value, const RuntimeMethod* method) ;
// System.Void SetInteractionLayer::SetTargetLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetInteractionLayer_SetTargetLayer_mC501BDC7394331EBDA42BA30F267A4774BE00EA2 (SetInteractionLayer_t5E00392265D7B35E14F5BA8448FF93D8FC6E58C5* __this, const RuntimeMethod* method) ;
// System.Void SetInteractionLayer::SetOriginalLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetInteractionLayer_SetOriginalLayer_mF7F6ECEDA3D168A4B251209BE3B4AEEEC67E9664 (SetInteractionLayer_t5E00392265D7B35E14F5BA8448FF93D8FC6E58C5* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 InteractionLayerMask_op_Implicit_m6FF8E1165F1A46181E485809C17FF45A3B0C00BA (int32_t ___0_intVal, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Light::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::RGBToHSV(UnityEngine.Color,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color_RGBToHSV_m10DD6CE937F04FE322EED0E154C1D7D6933EA2F8 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_rgbColor, float* ___1_H, float* ___2_S, float* ___3_V, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MinMaxCurve_op_Implicit_m133028E91CF2F823F5E20F6B19A3332A02404086 (float ___0_constant, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverTime_m71BF3C0A80EA572CD87EFF5944E8FA680F51DC20 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void ShowMessageFromList::ShowMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowMessageFromList_ShowMessage_m74056C88434A90186A4ADC873402EC5E3719A1D8 (ShowMessageFromList_t2DD66CAD456F6C94361B4752CD0077BCEDB40CC5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void SpawnFromList::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_Spawn_mCEBE224251A236DC9AB8F5DBB4781F62D46195E0 (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, const RuntimeMethod* method) ;
// System.Void SpawnFromList::SpawnAndReplace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_SpawnAndReplace_mDFD10D3616F81147F9764FC8E32F93199EE189BA (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject SpawnFromList::CreateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnFromList_CreateObject_m3EEAAACDA77AC85C023D53FCBC08126FAD7D68E4 (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, const RuntimeMethod* method) ;
// System.Void SpawnFromList::ReplaceObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_ReplaceObject_mA73A2EAEA1D20F1B0B343EF68BCCE5F966453148 (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_newObject, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint UnityEngine.Collision::GetContact(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_up(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.TeleportRequest TeleportPlayer::CreateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE TeleportPlayer_CreateRequest_mE17C45CA9F93CD403E84F5DB97F555B33B7DA6E2 (TeleportPlayer_t7A369143DA5DD8DDBB94442E2A16ACC78543123A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor::get_teleportAnchorTransform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TeleportationAnchor_get_teleportAnchorTransform_m0711868C6E4463287017D36942E8A5C03122A435_inline (TeleportationAnchor_t5C73F0B7F59911E6F9F98FA9156ECBC6E9DD9085* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.MatchOrientation UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::get_matchOrientation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseTeleportationInteractable_get_matchOrientation_mB4CE35CEB0A0206457993CB28A618F300E4BC03D_inline (BaseTeleportationInteractable_t3CA78AC694D6BFBA115E724F2C104AB069449AE8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void ToggleParticle::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleParticle_Play_m0E822FA5CB1327602758EBF352267EE14E1B5FCF (ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA* __this, const RuntimeMethod* method) ;
// System.Void ToggleParticle::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleParticle_Stop_m164E498DF457C9D3CA311875DE091B2FB1AF493B (ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_playOnAwake_mC86DBF96156C8783FAC2AD1628529F354FB1C6D8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor>()
inline XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ToggleRay::SwitchInteractors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRay_SwitchInteractors_m7AB1689DA7D618F3624E9513578CB6C590AE16BD (ToggleRay_t56666DCAC4C4A9F240455653584F1AFB8FD21BC2* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean ToggleRay::TouchingObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToggleRay_TouchingObject_mEB2BF58C4F209C3320AE33C7549BD5E456B0D629 (ToggleRay_t56666DCAC4C4A9F240455653584F1AFB8FD21BC2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::.ctor()
inline void List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::get_Count()
inline int32_t List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_inline (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRController>()
inline XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* Component_GetComponent_TisXRController_t928E104C899E51FDE12C0A8AC68874587C46C28F_m125A78A2B11A8DC4E549B5275CFECD06A2B5B287 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Collision>::Invoke(T0)
inline void UnityEvent_1_Invoke_m9FD8C788E4BB7FA83567C4E1ABA07D56773E3B25 (UnityEvent_1_tB4FC3DD67F0E3B66746DE1028162920F6A30E4A4* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB4FC3DD67F0E3B66746DE1028162920F6A30E4A4*, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Collider>(T&)
inline bool Component_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m18C7B725568F747CF4748CAAC4A8BC9036A4F329 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void OnCollision/CollisionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvent__ctor_m428BE57B67BEBD790D856E05C153795287FF49D5 (CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Collision>::.ctor()
inline void UnityEvent_1__ctor_m43205529F1412DD4AF9B2CA9A71E20F39AC9C3DD (UnityEvent_1_tB4FC3DD67F0E3B66746DE1028162920F6A30E4A4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB4FC3DD67F0E3B66746DE1028162920F6A30E4A4*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared)(__this, method);
}
// System.Void OnJoystickMove/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m81283B84192903BA20CADC2EED0565AB41C0B0CB (ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26* __this, const RuntimeMethod* method) ;
// System.Void OnPull::CheckPull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPull_CheckPull_m4C75D6524CB0C10DD4A64A110622CA0245242405 (OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229* __this, const RuntimeMethod* method) ;
// System.Boolean OnPull::CheckThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnPull_CheckThreshold_mE5653CDDA3292B164527030F2D0FF6096DA8835B (OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m72A7C2A1B8EF1C21A208A9A015375577768B3978 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void OnTilt::CheckOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTilt_CheckOrientation_m89F56736AEC5F668CACE0C2287AF7C6290C22530 (OnTilt_t0BBC6BF26D4EE49C994CF142396AE9C76BA3EF23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.MonoBehaviour>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1 (UnityEvent_1_tCFEF3A01CCBD0C72AD71A275C5AD5F10E4BF652C* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCFEF3A01CCBD0C72AD71A275C5AD5F10E4BF652C*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void OnTilt/TiltEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltEvent__ctor_mD07C22013245370E6AE486FBC8536025A56493F8 (TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.MonoBehaviour>::.ctor()
inline void UnityEvent_1__ctor_mDD85D3BD5692606F4DA08AEF04F83FD152CEA678 (UnityEvent_1_tCFEF3A01CCBD0C72AD71A275C5AD5F10E4BF652C* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCFEF3A01CCBD0C72AD71A275C5AD5F10E4BF652C*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Collections.IEnumerator OnTimedInterval::IntervalRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTimedInterval_IntervalRoutine_m53C4319DFCC398662538160284872A1483072625 (OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* __this, const RuntimeMethod* method) ;
// System.Void OnTimedInterval/<IntervalRoutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntervalRoutineU3Ed__4__ctor_m1DC3EEBE3646702DC9E11E82465B60D377E9DE28 (U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void OnTimedInterval::PlayEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTimedInterval_PlayEvent_mA6AB605C28CD8B2BE2A61DD905C8AF6C4099D2E3 (OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* __this, const RuntimeMethod* method) ;
// System.Boolean OnTrigger::CanTrigger(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnTrigger_CanTrigger_m1031C213B74BE38AEE2697FDCF19FF5E93D1B227 (OnTrigger_tEBBA6B78D0052F76B7320FF71C7130F99DF85A41* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_otherGameObject, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Collider>::Invoke(T0)
inline void UnityEvent_1_Invoke_m288CD64C3923EC3CCAD5D49C59DBE59B75F48AED (UnityEvent_1_t335D377DAE90CACA005C20ED055B3F9201EFAA72* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t335D377DAE90CACA005C20ED055B3F9201EFAA72*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void OnTrigger/TriggerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent__ctor_mEF780A5D525AB70222BEB826D916818A336304B1 (TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Collider>::.ctor()
inline void UnityEvent_1__ctor_mC69A7D7C9B31012B413D4CBEAF78BD36498160C2 (UnityEvent_1_t335D377DAE90CACA005C20ED055B3F9201EFAA72* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t335D377DAE90CACA005C20ED055B3F9201EFAA72*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void OnVelocity::CheckVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVelocity_CheckVelocity_m50031CA2EC0203632351BF6505A8C743981B8936 (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, const RuntimeMethod* method) ;
// System.Boolean OnVelocity::HasVelocityBegun(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnVelocity_HasVelocityBegun_m01A68C69997A59CE68120FC408122867E5DB6CDC (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, float ___0_speed, const RuntimeMethod* method) ;
// System.Boolean OnVelocity::HasVelcoityEnded(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnVelocity_HasVelcoityEnded_m30DAF5DAB9F0251471D7B5A0D2AD1B43B2C8288D (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, float ___0_speed, const RuntimeMethod* method) ;
// System.Void OnVelocity::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVelocity_Reset_m604A80B30797E37D40BFA9CEC2BC543B22DB8988 (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, const RuntimeMethod* method) ;
// System.Void OnVelocity/VelocityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityEvent__ctor_m9C1F8EF88F6268DAD57C8D5D2C5E22444E272340 (VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_hoverEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4 (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_hoverExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8 (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33 (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19 (HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* __this, const RuntimeMethod* method) ;
// System.Single XRButton::GetLocalYPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRButton_GetLocalYPosition_mC710DC12BBF966B2CFE45FDF65709A2E1EA75FF7 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void XRButton::ApplyHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_ApplyHeight_m3E8A3EDB8ECCD946AAEAA9BF550D8CB27892C97B (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, float ___0_position, const RuntimeMethod* method) ;
// System.Void XRButton::SetMinMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_SetMinMax_mD5F3EE07D187011F922A2AD987889041CC03AF29 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_isHovered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_get_isHovered_m365DB744ECBAB53AD4A489F6EBA5360DF993FB1E (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Single XRButton::FindButtonHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRButton_FindButtonHeight_mB9A6E02F6C6F093FA946B13AF7E66F028800B326 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void XRButton::SetButtonPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_SetButtonPosition_m5D602A5FB1BFBE8F96FB58820DC7BF1104EB6239 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, float ___0_position, const RuntimeMethod* method) ;
// System.Void XRButton::CheckPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_CheckPress_mBFA9E05F531D7B2E03B79972211E9870675631FD (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) ;
// System.Boolean XRButton::InPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRButton_InPosition_m7013258CE80BC37121BDD1D58AE359375A4C5C67 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C (SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 XRJoystick::ConvertToLocal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRJoystick_ConvertToLocal_m386BA88E88756C7F00D5A9CBF2C4DE35289B79EF (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) ;
// System.Void XRJoystick::ResetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_ResetRotation_m49EA4CA91F35B6112ED3EAA5FA1B53E6C43A2E14 (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void XRJoystick::SetValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_SetValue_m6D9750078B6D7AEABCF5C7C0D731918FA38F778A (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_isSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 XRJoystick::FindJoystickRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRJoystick_FindJoystickRotation_m1291A8C5F01AE14F7E0DBCC42DBA0B7960D0C986 (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) ;
// System.Void XRJoystick::ApplyRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_ApplyRotation_m4D2CE9C538B35E2484937776E5BD300C982A3D9F (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_newRotation, const RuntimeMethod* method) ;
// System.Single XRJoystick::GetRotationDifference(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRJoystick_GetRotationDifference_m86C4DEB768FD73CED0623F31A54BF4BF041EB8CF (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, float ___0_yRelative, float ___1_xRelative, const RuntimeMethod* method) ;
// UnityEngine.Vector2 XRJoystick::CalculateValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRJoystick_CalculateValue_m8BD3229014D250B186BFA507D523B06FF0915F7A (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_rotation, const RuntimeMethod* method) ;
// System.Void XRJoystick::set_Value(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRJoystick_set_Value_m694DB106F38D758A8EF0EFE73C5E106F96763EF1_inline (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 XRJoystick::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRJoystick_get_Value_mF49BC0A4B9416B7AC7BE7FB06A64C804151311D6_inline (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Single XRJoystick::Normalize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRJoystick_Normalize_m334AD9E307F7892C1422EEF40A54DDD38DA8EBEB (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void XRJoystick/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m56B177EA8CA7980B43EC38C48A6C5523BCB08D29 (ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1* __this, const RuntimeMethod* method) ;
// System.Single XRKnob::ApplyRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ApplyRotation_m0A30A8D8603403DA2A938BB747816CD34EBA6E34 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_angle, const RuntimeMethod* method) ;
// System.Void XRKnob::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetValue_m17C9FDF03E07A29BAE26495543F4D3EE3DC8B690 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_rotation, const RuntimeMethod* method) ;
// System.Single XRKnob::FindRotationValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_FindRotationValue_m6AA7A0C6ADD8762DF93DA717BD46578E3B4203F1 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) ;
// System.Void XRKnob::set_Angle(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRKnob_set_Angle_mAF3F22FD68F49D5D0761D36C213874CFC1141757_inline (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single XRKnob::get_Angle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRKnob_get_Angle_m9BCC3C3132FA6FFAB210D92F1B1B966BE928684A_inline (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_axis, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single XRKnob::ClampAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ClampAngle_mCF17BA4970ED5E56B3F10410BFCCD4003391A64D (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_angle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void XRKnob::set_Value(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRKnob_set_Value_m408E8821B4F35EE520F4318D4B2951600C340A1C_inline (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single XRKnob::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRKnob_get_Value_m40D6F73992F439850EA85E49448CBFF20399E701_inline (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) ;
// System.Void XRKnob/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m1F803B770069A94CF68F98BB0F21F5B98175CBB8 (ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC* __this, const RuntimeMethod* method) ;
// System.Void XRLever::FindSnapDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_FindSnapDirection_m7EA820999D1048333ADC6F0CCEC6C1B44394E1CA (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, bool ___0_isOn, const RuntimeMethod* method) ;
// System.Void XRLever::SetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetValue_m6332E2665D140EBB2608149EBAD3392048331B4D (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, bool ___0_isOn, const RuntimeMethod* method) ;
// UnityEngine.Vector3 XRLever::GetLookDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRLever_GetLookDirection_mCCC8405FA2A59C2FFE66075A8FE1FA80298A6F38 (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectExitEventArgs_get_interactorObject_m395880E1D46E6008A4AA90836393E4F1E39CAAA3 (SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* __this, const RuntimeMethod* method) ;
// System.Boolean XRLever::InOnPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLever_InOnPosition_mC5593824D1A3B0DB7FF7B54AE93B750E3EAA8870 (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_interactorPosition, const RuntimeMethod* method) ;
// System.Void XRLever::set_Value(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRLever_set_Value_mF72830809FEF43727B9F2F30493D2B92FFD13436_inline (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean XRLever::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRLever_get_Value_m7E067A17EE3919C5087E826CF62ACFDC8155D19F_inline (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, const RuntimeMethod* method) ;
// System.Void XRSlider::set_Value(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSlider_set_Value_m0EE6FB6914CF04ABFF2852FA781F5B536E9C3A0E_inline (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single XRSlider::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRSlider_get_Value_m41B41463BAABF34AC6E72384EB290E0A693C587C_inline (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, const RuntimeMethod* method) ;
// System.Void XRSlider::ApplyValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_ApplyValue_mE7BB5EE23D04F68A785E60CFC0A692CF29F67D88 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single XRSlider::FindPullValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSlider_FindPullValue_mC6F69D482A9F0CA9EB52D443AF7496B89D7275E1 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void XRSlider::SetHandlePosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetHandlePosition_m768980818A2C4793C63C604805F44840960B03A5 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, float ___0_blend, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void XRSlider/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m94B40B5B65637B25CCCA8A30B1063CC5DA6F99D0 (ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Collections.IEnumerator DisplayFPS::ShowFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisplayFPS_ShowFPS_mA02AC8E3F27617779F8DF673A9F477067BCBADD4 (DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* __this, const RuntimeMethod* method) ;
// System.Void DisplayFPS::CalculateCurrentFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayFPS_CalculateCurrentFPS_mB0DAE0A006C52E505E53AB6AD7B13FE711B421D4 (DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Void DisplayFPS/<ShowFPS>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowFPSU3Ed__11__ctor_mCB31E79FBF4BFFB4861F08E9FC144A9159C7829E (U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTeleportationInteractable_Awake_mC0C13EE138834FD575C21D6CA01E1FC07F701600 (BaseTeleportationInteractable_t3CA78AC694D6BFBA115E724F2C104AB069449AE8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<FadeCanvas>()
inline FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* Object_FindObjectOfType_TisFadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D_m17C3D28827A6D3B527408B739346E8373F7650AE (const RuntimeMethod* method)
{
	return ((  FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTeleportationInteractable_OnSelectEntered_m0FD58F8C469202E81555C08B4362E2D23B620676 (BaseTeleportationInteractable_t3CA78AC694D6BFBA115E724F2C104AB069449AE8* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_args, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable/TeleportTrigger UnityEngine.XR.Interaction.Toolkit.BaseTeleportationInteractable::get_teleportTrigger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseTeleportationInteractable_get_teleportTrigger_m875F50A1066F596DA0CB800997B84B4A0F8B1A94_inline (BaseTeleportationInteractable_t3CA78AC694D6BFBA115E724F2C104AB069449AE8* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TeleportAnchorWithFade::FadeSequence<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>(UnityEngine.Events.UnityAction`1<T>,T)
inline RuntimeObject* TeleportAnchorWithFade_FadeSequence_TisSelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938_m79AAC9D5BDF03F192486C139F781709C6967D3BB (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_action, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938*, const RuntimeMethod*))TeleportAnchorWithFade_FadeSequence_TisRuntimeObject_mA5EF2D0F3BC4890A2302AC0414119B2A5749B6AE_gshared)(__this, ___0_action, ___1_args, method);
}
// System.Collections.IEnumerator TeleportAnchorWithFade::FadeSequence<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>(UnityEngine.Events.UnityAction`1<T>,T)
inline RuntimeObject* TeleportAnchorWithFade_FadeSequence_TisSelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A_m4C65299DA254C53F5505B93CE718F9FF6777D28A (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___0_action, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A*, const RuntimeMethod*))TeleportAnchorWithFade_FadeSequence_TisRuntimeObject_mA5EF2D0F3BC4890A2302AC0414119B2A5749B6AE_gshared)(__this, ___0_action, ___1_args, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF849D1CE17A326AA2C8F72F3A2BDF6C3C987D4C1 (UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.IEnumerator TeleportAnchorWithFade::FadeSequence<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>(UnityEngine.Events.UnityAction`1<T>,T)
inline RuntimeObject* TeleportAnchorWithFade_FadeSequence_TisActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E_mE9F327084376ACC7E5FF811A30AA1E62DAD63663 (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* ___0_action, ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91*, UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*, ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E*, const RuntimeMethod*))TeleportAnchorWithFade_FadeSequence_TisRuntimeObject_mA5EF2D0F3BC4890A2302AC0414119B2A5749B6AE_gshared)(__this, ___0_action, ___1_args, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mBDA1C72DBC9318EED1EF6E8E768E9E9FB88E487E (UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.IEnumerator TeleportAnchorWithFade::FadeSequence<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>(UnityEngine.Events.UnityAction`1<T>,T)
inline RuntimeObject* TeleportAnchorWithFade_FadeSequence_TisDeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0_m6528AECE1A19812DE20A67A15022951AF44B9AD5 (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4* ___0_action, DeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91*, UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4*, DeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0*, const RuntimeMethod*))TeleportAnchorWithFade_FadeSequence_TisRuntimeObject_mA5EF2D0F3BC4890A2302AC0414119B2A5749B6AE_gshared)(__this, ___0_action, ___1_args, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.TeleportationAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportationAnchor__ctor_m8645304E8AFD708D9BF3C8E3B8D2F64F9CEBA427 (TeleportationAnchor_t5C73F0B7F59911E6F9F98FA9156ECBC6E9DD9085* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TeleportAreaWithFade::FadeSequence<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>(UnityEngine.Events.UnityAction`1<T>,T)
inline RuntimeObject* TeleportAreaWithFade_FadeSequence_TisSelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938_mDFFB0CC3FBC703AB69088585ECAF7375389F2AA8 (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_action, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938*, const RuntimeMethod*))TeleportAreaWithFade_FadeSequence_TisRuntimeObject_m07F1D4F6B9B0047F4F07BE59D2700C745481843C_gshared)(__this, ___0_action, ___1_args, method);
}
// System.Collections.IEnumerator TeleportAreaWithFade::FadeSequence<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>(UnityEngine.Events.UnityAction`1<T>,T)
inline RuntimeObject* TeleportAreaWithFade_FadeSequence_TisSelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A_mC78D0C1265F7DB748F7E998491B5B29B6719C520 (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___0_action, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A*, const RuntimeMethod*))TeleportAreaWithFade_FadeSequence_TisRuntimeObject_m07F1D4F6B9B0047F4F07BE59D2700C745481843C_gshared)(__this, ___0_action, ___1_args, method);
}
// System.Collections.IEnumerator TeleportAreaWithFade::FadeSequence<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>(UnityEngine.Events.UnityAction`1<T>,T)
inline RuntimeObject* TeleportAreaWithFade_FadeSequence_TisActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E_mD23F46521F677509CFBE8584B6D8C545BDA87D02 (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* ___0_action, ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0*, UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*, ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E*, const RuntimeMethod*))TeleportAreaWithFade_FadeSequence_TisRuntimeObject_m07F1D4F6B9B0047F4F07BE59D2700C745481843C_gshared)(__this, ___0_action, ___1_args, method);
}
// System.Collections.IEnumerator TeleportAreaWithFade::FadeSequence<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>(UnityEngine.Events.UnityAction`1<T>,T)
inline RuntimeObject* TeleportAreaWithFade_FadeSequence_TisDeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0_m62B63A70E2F5ADC4A3C5DF65770C54BD55EC5A6C (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4* ___0_action, DeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0* ___1_args, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0*, UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4*, DeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0*, const RuntimeMethod*))TeleportAreaWithFade_FadeSequence_TisRuntimeObject_m07F1D4F6B9B0047F4F07BE59D2700C745481843C_gshared)(__this, ___0_action, ___1_args, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.TeleportationArea::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportationArea__ctor_mBD0DD39D29BA373207C79E8600D8F183D3E14EFB (TeleportationArea_t4E760401D8B7EBAA17DD75E248517C0ECBB608FD* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF (float ___0_H, float ___1_S, float ___2_V, bool ___3_hdr, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
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
// System.Void ClockAnalogController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClockAnalogController_Start_mAF597DE0E94D9CA7E8494037091F6376A7CF8548 (ClockAnalogController_t40F5B0B3950665151472CCF69C37672E0DCFA6FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDEAD402FE92E73D5555924E2FD2235479FCFF3E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating(nameof(UpdateClock), 0, 1);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralEDEAD402FE92E73D5555924E2FD2235479FCFF3E, (0.0f), (1.0f), NULL);
		// }
		return;
	}
}
// System.Void ClockAnalogController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClockAnalogController_Update_m0E5A91044A39CB68B0892D74A4BD3A36541F9122 (ClockAnalogController_t40F5B0B3950665151472CCF69C37672E0DCFA6FA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ClockAnalogController::UpdateClock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClockAnalogController_UpdateClock_m306C77D98C4BB3D0648CCB913A15D7B0A2818F31 (ClockAnalogController_t40F5B0B3950665151472CCF69C37672E0DCFA6FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// hourHand.transform.localRotation = Quaternion.Euler((System.DateTime.Now.Hour / 12f) * 360f + 90, 0, -90);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___hourHand_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((float)L_3)/(12.0f))), (360.0f))), (90.0f))), (0.0f), (-90.0f), NULL);
		NullCheck(L_1);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_1, L_4, NULL);
		// minuteHand.transform.localRotation = Quaternion.Euler((System.DateTime.Now.Minute / 60f) * 360f + 90, 0, -90);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___minuteHand_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_7;
		int32_t L_8;
		L_8 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((float)L_8)/(60.0f))), (360.0f))), (90.0f))), (0.0f), (-90.0f), NULL);
		NullCheck(L_6);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_6, L_9, NULL);
		// secondHand.transform.localRotation = Quaternion.Euler((System.DateTime.Now.Second / 60f) * 360f + 90, 0, -90);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___secondHand_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		L_12 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((float)L_13)/(60.0f))), (360.0f))), (90.0f))), (0.0f), (-90.0f), NULL);
		NullCheck(L_11);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_11, L_14, NULL);
		// }
		return;
	}
}
// System.Void ClockAnalogController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClockAnalogController__ctor_m2EEC8D04D228AF9A85FC42F59F4B13874D63B839 (ClockAnalogController_t40F5B0B3950665151472CCF69C37672E0DCFA6FA* __this, const RuntimeMethod* method) 
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
// System.Void ApplyPhysics::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyPhysics_Awake_m4CA06875849B0B86A233D0821F13A97D04456D19 (ApplyPhysics_tAE3C26379247A0E3445B10AD7C7472826A2E5D96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidBody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidBody_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidBody_4), (void*)L_0);
		// originalMode = rigidBody.collisionDetectionMode;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rigidBody_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Rigidbody_get_collisionDetectionMode_m5A18E2DE70F4C37841300A34A183FF3ADE01D943(L_1, NULL);
		__this->___originalMode_5 = L_2;
		// }
		return;
	}
}
// System.Void ApplyPhysics::EnablePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyPhysics_EnablePhysics_m4D02AF2C95A9E601E2B893DB4D5A5DF3F5C8B163 (ApplyPhysics_tAE3C26379247A0E3445B10AD7C7472826A2E5D96* __this, const RuntimeMethod* method) 
{
	{
		// rigidBody.collisionDetectionMode = originalMode;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigidBody_4;
		int32_t L_1 = __this->___originalMode_5;
		NullCheck(L_0);
		Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_0, L_1, NULL);
		// rigidBody.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rigidBody_4;
		NullCheck(L_2);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_2, (bool)1, NULL);
		// rigidBody.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rigidBody_4;
		NullCheck(L_3);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ApplyPhysics::DisablePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyPhysics_DisablePhysics_m314CA751F38B881E3E92D1EE06F75B73319C07AE (ApplyPhysics_tAE3C26379247A0E3445B10AD7C7472826A2E5D96* __this, const RuntimeMethod* method) 
{
	{
		// rigidBody.collisionDetectionMode = CollisionDetectionMode.Discrete;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigidBody_4;
		NullCheck(L_0);
		Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_0, 0, NULL);
		// rigidBody.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rigidBody_4;
		NullCheck(L_1);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_1, (bool)0, NULL);
		// rigidBody.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rigidBody_4;
		NullCheck(L_2);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ApplyPhysics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyPhysics__ctor_m5499D6E3471E11ED5CE976078F94804AD77C4EF3 (ApplyPhysics_tAE3C26379247A0E3445B10AD7C7472826A2E5D96* __this, const RuntimeMethod* method) 
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
// System.Void ChangeMaterial::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMaterial_Awake_mB08CF3728176C0CDE938747C186DE687CFE1F060 (ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___meshRenderer_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_6), (void*)L_0);
		// originalMaterial = meshRenderer.material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = __this->___meshRenderer_6;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___originalMaterial_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalMaterial_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void ChangeMaterial::SetOtherMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMaterial_SetOtherMaterial_m2AA83AF241EE68386DFE58B6A935FDD97E3E6833 (ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578* __this, const RuntimeMethod* method) 
{
	{
		// usingOther = true;
		__this->___usingOther_5 = (bool)1;
		// meshRenderer.material = otherMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___otherMaterial_4;
		NullCheck(L_0);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ChangeMaterial::SetOriginalMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMaterial_SetOriginalMaterial_m841A8E06C39E9C50975BAC8153F09F46778E7522 (ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578* __this, const RuntimeMethod* method) 
{
	{
		// usingOther = false;
		__this->___usingOther_5 = (bool)0;
		// meshRenderer.material = originalMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___originalMaterial_7;
		NullCheck(L_0);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ChangeMaterial::ToggleMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMaterial_ToggleMaterial_m61298475F3313F2C365806C3C8AF73288A08E37B (ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578* __this, const RuntimeMethod* method) 
{
	{
		// usingOther = !usingOther;
		bool L_0 = __this->___usingOther_5;
		__this->___usingOther_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if(usingOther)
		bool L_1 = __this->___usingOther_5;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// meshRenderer.material = otherMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___meshRenderer_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___otherMaterial_4;
		NullCheck(L_2);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_2, L_3, NULL);
		return;
	}

IL_0029:
	{
		// meshRenderer.material = originalMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = __this->___meshRenderer_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___originalMaterial_7;
		NullCheck(L_4);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void ChangeMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMaterial__ctor_m299412F0E46735B612E3746C5C43606D8CAD11D8 (ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578* __this, const RuntimeMethod* method) 
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
// System.Void ConvertValueToHue::SetHue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertValueToHue_SetHue_m53404B185A287F7F461C7F20CB887DF31A631A47 (ConvertValueToHue_tB4A10BD6779F1765FE66E59F8A9D555D49BCF24D* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// value = Mathf.Clamp(value, 0, 1);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.0f), (1.0f), NULL);
		___0_value = L_1;
		// Color newColor = Color.HSVToRGB(value, saturation, value);
		float L_2 = ___0_value;
		float L_3 = __this->___saturation_4;
		float L_4 = ___0_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// OnColorChange.Invoke(newColor);
		ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4* L_6 = __this->___OnColorChange_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		NullCheck(L_6);
		UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D(L_6, L_7, UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ConvertValueToHue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertValueToHue__ctor_m35D7439265F87F9B096708FB7F9B1C0434620251 (ConvertValueToHue_tB4A10BD6779F1765FE66E59F8A9D555D49BCF24D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Range(0, 1)] public float saturation = 1.0f;
		__this->___saturation_4 = (1.0f);
		// [Range(0, 1)] public float value = 0.5f;
		__this->___value_5 = (0.5f);
		// public ColorChangeEvent OnColorChange = new ColorChangeEvent();
		ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4* L_0 = (ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4*)il2cpp_codegen_object_new(ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ColorChangeEvent__ctor_m26B85FD37308531FB96419E86EABE54EF01A1E40(L_0, NULL);
		__this->___OnColorChange_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnColorChange_6), (void*)L_0);
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
// System.Void ConvertValueToHue/ColorChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChangeEvent__ctor_m26B85FD37308531FB96419E86EABE54EF01A1E40 (ColorChangeEvent_t9F5D38B08EA53BE15622AB2D3F1BA22C214903F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D(__this, UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var);
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
// System.Void CreateTrail::StartTrail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateTrail_StartTrail_m2B76F7A6CF1BD214BA38EB5BD00BB60200E42C3D (CreateTrail_tB6F4EA1F1960FDEAC10E34A27FEBBE560BA79690* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!currentTrail)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentTrail_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0046;
		}
	}
	{
		// currentTrail = Instantiate(trailPrefab, transform.position, transform.rotation, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___trailPrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_2, L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		__this->___currentTrail_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTrail_7), (void*)L_8);
		// ApplySettings(currentTrail);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___currentTrail_7;
		CreateTrail_ApplySettings_m5EA288618E7B0937E058DE360E8DD46BD2469143(__this, L_9, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void CreateTrail::ApplySettings(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateTrail_ApplySettings_m5EA288618E7B0937E058DE360E8DD46BD2469143 (CreateTrail_tB6F4EA1F1960FDEAC10E34A27FEBBE560BA79690* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_trailObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TrailRenderer trailRenderer = trailObject.GetComponent<TrailRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_trailObject;
		NullCheck(L_0);
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_1;
		L_1 = GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62(L_0, GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62_RuntimeMethod_var);
		// trailRenderer.widthMultiplier = width;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_2 = L_1;
		float L_3 = __this->___width_5;
		NullCheck(L_2);
		TrailRenderer_set_widthMultiplier_m3362BDEED1C1AEF9AEDB9862D69FA48676A09F83(L_2, L_3, NULL);
		// trailRenderer.startColor = color;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_4 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___color_6;
		NullCheck(L_4);
		TrailRenderer_set_startColor_m1474AFF43F59009D38FF4EF933ACBEE6D54FA016(L_4, L_5, NULL);
		// trailRenderer.endColor = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___color_6;
		NullCheck(L_4);
		TrailRenderer_set_endColor_m392013339F5C6151B900C76FF8D2D80F1B0F20BE(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void CreateTrail::EndTrail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateTrail_EndTrail_m7A4904304D0A70EB6A39665AE3B69F7237829850 (CreateTrail_tB6F4EA1F1960FDEAC10E34A27FEBBE560BA79690* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentTrail)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentTrail_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// currentTrail.transform.parent = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___currentTrail_7;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// currentTrail = null;
		__this->___currentTrail_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTrail_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void CreateTrail::SetWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateTrail_SetWidth_m4CCD1467298421096990483847D717CF19DC6FA9 (CreateTrail_tB6F4EA1F1960FDEAC10E34A27FEBBE560BA79690* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// width = value;
		float L_0 = ___0_value;
		__this->___width_5 = L_0;
		// }
		return;
	}
}
// System.Void CreateTrail::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateTrail_SetColor_m7289DCF63DEF4E3997156279ED49A34E20B81534 (CreateTrail_tB6F4EA1F1960FDEAC10E34A27FEBBE560BA79690* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// color = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___color_6 = L_0;
		// }
		return;
	}
}
// System.Void CreateTrail::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateTrail__ctor_m3031B07B3EC3D6E41BF110DE96F2471D13EB5B50 (CreateTrail_tB6F4EA1F1960FDEAC10E34A27FEBBE560BA79690* __this, const RuntimeMethod* method) 
{
	{
		// private float width = 0.05f;
		__this->___width_5 = (0.0500000007f);
		// private Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_6 = L_0;
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
// System.Void DestroyObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyObject_Start_mFEF12EB76733D31F236DA4DF517E42C8D5E406F1 (DestroyObject_t65B4BF80949DFEEAB0B8908FCBBD50C7C7A57585* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, lifeTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_1 = __this->___lifeTime_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DestroyObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyObject__ctor_mFE2CB936862B2F800A88B0CA684D9E8CCA917E95 (DestroyObject_t65B4BF80949DFEEAB0B8908FCBBD50C7C7A57585* __this, const RuntimeMethod* method) 
{
	{
		// public float lifeTime = 5.0f;
		__this->___lifeTime_4 = (5.0f);
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
// System.Void FadeCanvas::set_CurrentRoutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvas_set_CurrentRoutine_m27241B5B956B0E4C67D7E939C5D523AFB3A9B780 (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Coroutine CurrentRoutine { private set; get; } = null;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = ___0_value;
		__this->___U3CCurrentRoutineU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentRoutineU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Coroutine FadeCanvas::get_CurrentRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* FadeCanvas_get_CurrentRoutine_m1ABAF275C0B6AD7FE13EF6E8C857A276F8F3AD73 (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, const RuntimeMethod* method) 
{
	{
		// public Coroutine CurrentRoutine { private set; get; } = null;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___U3CCurrentRoutineU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void FadeCanvas::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvas_Awake_m7B2DFC3B372D395A108DD2B1E9075FC75DA3267A (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvasGroup = GetComponent<CanvasGroup>();
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0;
		L_0 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(__this, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___canvasGroup_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasGroup_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void FadeCanvas::StartFadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvas_StartFadeIn_mD3949C71E229A34C2634285E1E27ADDC01E9BF0C (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// CurrentRoutine = StartCoroutine(FadeIn(defaultDuration));
		float L_0 = __this->___defaultDuration_4;
		RuntimeObject* L_1;
		L_1 = FadeCanvas_FadeIn_m81AFFB3D7884B1CF7DE8388961E8B826C4C20170(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		FadeCanvas_set_CurrentRoutine_m27241B5B956B0E4C67D7E939C5D523AFB3A9B780_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FadeCanvas::StartFadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvas_StartFadeOut_m3E3BC473AF38A31E5751871AF68D7681A49332EC (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// CurrentRoutine = StartCoroutine(FadeOut(defaultDuration));
		float L_0 = __this->___defaultDuration_4;
		RuntimeObject* L_1;
		L_1 = FadeCanvas_FadeOut_m3B13723239FEAFA1B4C06F65831D21BD3631A5B0(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		FadeCanvas_set_CurrentRoutine_m27241B5B956B0E4C67D7E939C5D523AFB3A9B780_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FadeCanvas::QuickFadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvas_QuickFadeIn_mFC064A1B5EE49B30BFD85429F3EB1141F9B714ED (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// CurrentRoutine = StartCoroutine(FadeIn(quickFadeDuration));
		float L_0 = __this->___quickFadeDuration_8;
		RuntimeObject* L_1;
		L_1 = FadeCanvas_FadeIn_m81AFFB3D7884B1CF7DE8388961E8B826C4C20170(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		FadeCanvas_set_CurrentRoutine_m27241B5B956B0E4C67D7E939C5D523AFB3A9B780_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FadeCanvas::QuickFadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvas_QuickFadeOut_m1B809F0AEA740A9064A764806B5D881BBC3EFFE1 (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// CurrentRoutine = StartCoroutine(FadeOut(quickFadeDuration));
		float L_0 = __this->___quickFadeDuration_8;
		RuntimeObject* L_1;
		L_1 = FadeCanvas_FadeOut_m3B13723239FEAFA1B4C06F65831D21BD3631A5B0(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		FadeCanvas_set_CurrentRoutine_m27241B5B956B0E4C67D7E939C5D523AFB3A9B780_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FadeCanvas::FadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeCanvas_FadeIn_m81AFFB3D7884B1CF7DE8388961E8B826C4C20170 (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, float ___0_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E* L_0 = (U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E*)il2cpp_codegen_object_new(U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInU3Ed__13__ctor_mB46FA71E7829A3EF69D94A4B85847AC3EF508BD1(L_0, 0, NULL);
		U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E* L_2 = L_1;
		float L_3 = ___0_duration;
		NullCheck(L_2);
		L_2->___duration_3 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator FadeCanvas::FadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeCanvas_FadeOut_m3B13723239FEAFA1B4C06F65831D21BD3631A5B0 (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, float ___0_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69* L_0 = (U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69*)il2cpp_codegen_object_new(U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeOutU3Ed__14__ctor_m54EC2481B8DC3171E0DF898C9C862CF45C84ACB0(L_0, 0, NULL);
		U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69* L_2 = L_1;
		float L_3 = ___0_duration;
		NullCheck(L_2);
		L_2->___duration_3 = L_3;
		return L_2;
	}
}
// System.Void FadeCanvas::SetAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvas_SetAlpha_mCA35CC5EBE735C0A4953627E6EFC70855CD8A647 (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// alpha = value;
		float L_0 = ___0_value;
		__this->___alpha_7 = L_0;
		// canvasGroup.alpha = alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1 = __this->___canvasGroup_6;
		float L_2 = __this->___alpha_7;
		NullCheck(L_1);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void FadeCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvas__ctor_mFB44A18BD8023709CF5B022E805B469C0F59E910 (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, const RuntimeMethod* method) 
{
	{
		// public float defaultDuration = 1.0f;
		__this->___defaultDuration_4 = (1.0f);
		// private float quickFadeDuration = 0.25f;
		__this->___quickFadeDuration_8 = (0.25f);
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
// System.Void FadeCanvas/<FadeIn>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__13__ctor_mB46FA71E7829A3EF69D94A4B85847AC3EF508BD1 (U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FadeCanvas/<FadeIn>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__13_System_IDisposable_Dispose_mB5E31C0CDF7969E21B842BA3A21299784F749E65 (U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FadeCanvas/<FadeIn>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInU3Ed__13_MoveNext_m1AE04784497AC66856D5ACF43B9D50E4AEEC5FC7 (U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float elapsedTime = 0.0f;
		__this->___U3CelapsedTimeU3E5__2_4 = (0.0f);
		goto IL_0067;
	}

IL_002b:
	{
		// SetAlpha(elapsedTime / duration);
		FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* L_4 = V_1;
		float L_5 = __this->___U3CelapsedTimeU3E5__2_4;
		float L_6 = __this->___duration_3;
		NullCheck(L_4);
		FadeCanvas_SetAlpha_mCA35CC5EBE735C0A4953627E6EFC70855CD8A647(L_4, ((float)(L_5/L_6)), NULL);
		// elapsedTime += Time.deltaTime;
		float L_7 = __this->___U3CelapsedTimeU3E5__2_4;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedTimeU3E5__2_4 = ((float)il2cpp_codegen_add(L_7, L_8));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0060:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0067:
	{
		// while (alpha <= 1.0f)
		FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___alpha_7;
		if ((((float)L_10) <= ((float)(1.0f))))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object FadeCanvas/<FadeIn>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m92967984050458D10F5CCD09B4F3FAD0AF8FEDAB (U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FadeCanvas/<FadeIn>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__13_System_Collections_IEnumerator_Reset_m8C8EA60D28D9085E1CDD627D7DD3D42E654F3250 (U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInU3Ed__13_System_Collections_IEnumerator_Reset_m8C8EA60D28D9085E1CDD627D7DD3D42E654F3250_RuntimeMethod_var)));
	}
}
// System.Object FadeCanvas/<FadeIn>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__13_System_Collections_IEnumerator_get_Current_mD2419CE0D55C8A689FEEDB76D3BFB73325FA9F14 (U3CFadeInU3Ed__13_t9A72277C7889640354F881A8C356279632889D9E* __this, const RuntimeMethod* method) 
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
// System.Void FadeCanvas/<FadeOut>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__14__ctor_m54EC2481B8DC3171E0DF898C9C862CF45C84ACB0 (U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FadeCanvas/<FadeOut>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__14_System_IDisposable_Dispose_mCA1854754DC1120762C619078339456E75D118E8 (U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FadeCanvas/<FadeOut>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutU3Ed__14_MoveNext_m49D5B101B838E7DF7EB32243EEA2F9AD28FEFF1B (U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float elapsedTime = 0.0f;
		__this->___U3CelapsedTimeU3E5__2_4 = (0.0f);
		goto IL_006d;
	}

IL_002b:
	{
		// SetAlpha(1 - (elapsedTime / duration));
		FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* L_4 = V_1;
		float L_5 = __this->___U3CelapsedTimeU3E5__2_4;
		float L_6 = __this->___duration_3;
		NullCheck(L_4);
		FadeCanvas_SetAlpha_mCA35CC5EBE735C0A4953627E6EFC70855CD8A647(L_4, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_5/L_6)))), NULL);
		// elapsedTime += Time.deltaTime;
		float L_7 = __this->___U3CelapsedTimeU3E5__2_4;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedTimeU3E5__2_4 = ((float)il2cpp_codegen_add(L_7, L_8));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006d:
	{
		// while (alpha >= 0.0f)
		FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___alpha_7;
		if ((((float)L_10) >= ((float)(0.0f))))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object FadeCanvas/<FadeOut>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD5AE68B980516E47EEBF768B7EDE487B079627C1 (U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FadeCanvas/<FadeOut>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__14_System_Collections_IEnumerator_Reset_m6B4836A7F39729C5718A0E79CDC7C85D463C4AE9 (U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutU3Ed__14_System_Collections_IEnumerator_Reset_m6B4836A7F39729C5718A0E79CDC7C85D463C4AE9_RuntimeMethod_var)));
	}
}
// System.Object FadeCanvas/<FadeOut>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutU3Ed__14_System_Collections_IEnumerator_get_Current_m1D997A803DC0196A3D980CACC0D497DE4778C972 (U3CFadeOutU3Ed__14_tD738A19FEFDC41D9D5231D0E6BEEF7F980C99B69* __this, const RuntimeMethod* method) 
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
// System.Void FadeCanvasOnOverlap::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvasOnOverlap_Update_m3307157F839D6FFE4829B4F65E9277BF8E529DB5 (FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA* __this, const RuntimeMethod* method) 
{
	{
		// CheckOverlap();
		FadeCanvasOnOverlap_CheckOverlap_mF4D02F5AD241B6D93C200B15DB67D82EEE8D9423(__this, NULL);
		// }
		return;
	}
}
// System.Void FadeCanvasOnOverlap::CheckOverlap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvasOnOverlap_CheckOverlap_mF4D02F5AD241B6D93C200B15DB67D82EEE8D9423 (FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// Collider[] results = Physics.OverlapSphere(transform.position, checkDistance, overlapMask, QueryTriggerInteraction.Ignore);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___checkDistance_4;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___overlapMask_5;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5;
		L_5 = Physics_OverlapSphere_m348CF43E53C703DEF4A6780A3B9DE2A1FB958318(L_1, L_2, L_4, 1, NULL);
		V_0 = L_5;
		// List<Vector3> bounds = GetColliderBounds(results);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7;
		L_7 = FadeCanvasOnOverlap_GetColliderBounds_m9338E04A31437EB992F6F844E65B8736061FBA9E(__this, L_6, NULL);
		V_1 = L_7;
		// float closest = FindClosestPoint(bounds);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = V_1;
		float L_9;
		L_9 = FadeCanvasOnOverlap_FindClosestPoint_m066816B84309815C5AABDC35787D8A362B20ABE4(__this, L_8, NULL);
		V_2 = L_9;
		// float percentage = Mathf.InverseLerp(checkDistance / 2.0f, 0.0f, closest);
		float L_10 = __this->___checkDistance_4;
		float L_11 = V_2;
		float L_12;
		L_12 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(((float)(L_10/(2.0f))), (0.0f), L_11, NULL);
		V_3 = L_12;
		// OnValueChange.Invoke(percentage);
		ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93* L_13 = __this->___OnValueChange_6;
		float L_14 = V_3;
		NullCheck(L_13);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_13, L_14, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> FadeCanvasOnOverlap::GetColliderBounds(UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* FadeCanvasOnOverlap_GetColliderBounds_m9338E04A31437EB992F6F844E65B8736061FBA9E (FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___0_colliders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_1 = NULL;
	int32_t V_2 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// List<Vector3> allBounds = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Collider collider in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1 = ___0_colliders;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0031;
	}

IL_000c:
	{
		// foreach (Collider collider in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Bounds bounds = collider.bounds;
		NullCheck(L_5);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6;
		L_6 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_5, NULL);
		V_3 = L_6;
		// allBounds.Add(bounds.ClosestPoint(transform.position));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC((&V_3), L_9, NULL);
		NullCheck(L_7);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_7, L_10, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0031:
	{
		// foreach (Collider collider in colliders)
		int32_t L_12 = V_2;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// return allBounds;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = V_0;
		return L_14;
	}
}
// System.Single FadeCanvasOnOverlap::FindClosestPoint(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FadeCanvasOnOverlap_FindClosestPoint_m066816B84309815C5AABDC35787D8A362B20ABE4 (FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_closestPoints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// float smallestDistance = float.MaxValue;
		V_0 = ((std::numeric_limits<float>::max)());
		// foreach (Vector3 point in closestPoints)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_closestPoints;
		NullCheck(L_0);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_1;
		L_1 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_0, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_1), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_000f_1:
			{
				// foreach (Vector3 point in closestPoints)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_1), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_2 = L_2;
				// float distance = (transform.position - point).magnitude;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
				L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				NullCheck(L_3);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
				L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
				V_4 = L_6;
				float L_7;
				L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
				V_3 = L_7;
				// if (distance < smallestDistance)
				float L_8 = V_3;
				float L_9 = V_0;
				if ((!(((float)L_8) < ((float)L_9))))
				{
					goto IL_0038_1;
				}
			}
			{
				// smallestDistance = distance;
				float L_10 = V_3;
				V_0 = L_10;
			}

IL_0038_1:
			{
				// foreach (Vector3 point in closestPoints)
				bool L_11;
				L_11 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_1), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// return smallestDistance;
		float L_12 = V_0;
		return L_12;
	}
}
// System.Void FadeCanvasOnOverlap::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvasOnOverlap_OnDrawGizmos_m9C074522E5590956A17A37051C1CEE4C542300D0 (FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.DrawWireSphere(transform.position, checkDistance);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___checkDistance_4;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void FadeCanvasOnOverlap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeCanvasOnOverlap__ctor_mCA5B3554D309B6DEB3BE8DFCF154A7D7A1BB725D (FadeCanvasOnOverlap_t9821A45233595372F63E340F1F481024181857EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float checkDistance = 0.5f;
		__this->___checkDistance_4 = (0.5f);
		// public LayerMask overlapMask = 0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(0, NULL);
		__this->___overlapMask_5 = L_0;
		// public ValueChangeEvent OnValueChange = new ValueChangeEvent();
		ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93* L_1 = (ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93*)il2cpp_codegen_object_new(ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ValueChangeEvent__ctor_mDE940C343983F3B6CDC1B2E7DEBB002E3F8EDEF5(L_1, NULL);
		__this->___OnValueChange_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnValueChange_6), (void*)L_1);
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
// System.Void FadeCanvasOnOverlap/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_mDE940C343983F3B6CDC1B2E7DEBB002E3F8EDEF5 (ValueChangeEvent_t9759D8E8DF96BD14F8863A67F13E415FD9378F93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void LaunchProjectile::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchProjectile_Fire_m6ED7CB4568D2B5DF073C8613F020B3FCD4EA6EF7 (LaunchProjectile_t9086561362C7884E1087EC08B8DFFE83942C1A75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_mCA867A56E93C824FB9C272E0DBB67655CB275941_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	{
		// GameObject newObject = Instantiate(projectilePrefab, startPoint.position, startPoint.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___projectilePrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___startPoint_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___startPoint_5;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// if (newObject.TryGetComponent(out Rigidbody rigidBody))
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_TryGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_mCA867A56E93C824FB9C272E0DBB67655CB275941(L_5, (&V_0), GameObject_TryGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_mCA867A56E93C824FB9C272E0DBB67655CB275941_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// ApplyForce(rigidBody);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = V_0;
		LaunchProjectile_ApplyForce_m777D368DB500D7BD9EB98B49AF3BEDDE35B5B8F1(__this, L_7, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void LaunchProjectile::ApplyForce(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchProjectile_ApplyForce_m777D368DB500D7BD9EB98B49AF3BEDDE35B5B8F1 (LaunchProjectile_t9086561362C7884E1087EC08B8DFFE83942C1A75* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_rigidBody, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 force = startPoint.forward * launchSpeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___startPoint_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		float L_2 = __this->___launchSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// rigidBody.AddForce(force);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = ___0_rigidBody;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void LaunchProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchProjectile__ctor_m6EBC7DFF8B535AE9DEB11B56CF51730B3B8CD475 (LaunchProjectile_t9086561362C7884E1087EC08B8DFFE83942C1A75* __this, const RuntimeMethod* method) 
{
	{
		// public float launchSpeed = 1.0f;
		__this->___launchSpeed_6 = (1.0f);
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
// System.Void LoadScene::LoadSceneUsingName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_LoadSceneUsingName_m71E1BD7ED21C72EBA6DAD36F572A3D719E006DE5 (LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___0_sceneName;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void LoadScene::ReloadCurrentScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_ReloadCurrentScene_m2152E85ECD2D6E6C404B3BF6644597B254C97100 (LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_1, NULL);
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
// System.Void LookAtPlayer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer_Awake_mC72F7BFF6E8D2AF3A9AF0970DE6AF5C7F0BABB18 (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m249105716FAB344C4BEB0FA279A3E0BF6CF4F9FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraObject = FindObjectOfType<XROrigin>().Camera.gameObject;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0;
		L_0 = Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m249105716FAB344C4BEB0FA279A3E0BF6CF4F9FE(Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m249105716FAB344C4BEB0FA279A3E0BF6CF4F9FE_RuntimeMethod_var);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_0, NULL);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		__this->___cameraObject_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraObject_7), (void*)L_2);
		// originalRotation = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		__this->___originalRotation_8 = L_4;
		// }
		return;
	}
}
// System.Void LookAtPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer_Update_m9EE58C1B9B2C9BF276C8C9CAECFDF7DA19C34BF5 (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
{
	{
		// LookAt();
		LookAtPlayer_LookAt_mF417AC423E36525A5B5D7933DFE09948BA27E84C(__this, NULL);
		// }
		return;
	}
}
// System.Void LookAtPlayer::LookAt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer_LookAt_mF417AC423E36525A5B5D7933DFE09948BA27E84C (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B8_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B9_1 = NULL;
	{
		// Vector3 direction = transform.position - cameraObject.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___cameraObject_7;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_4, NULL);
		// Vector3 newRotation =  Quaternion.LookRotation(direction, transform.up).eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_5, L_7, NULL);
		V_1 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		V_0 = L_9;
		// newRotation.x = lookX ? newRotation.x : originalRotation.x;
		bool L_10 = __this->___lookX_4;
		G_B1_0 = (&V_0);
		if (L_10)
		{
			G_B2_0 = (&V_0);
			goto IL_0050;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___originalRotation_8);
		float L_12 = L_11->___x_2;
		G_B3_0 = L_12;
		G_B3_1 = G_B1_0;
		goto IL_0056;
	}

IL_0050:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___x_2;
		G_B3_0 = L_14;
		G_B3_1 = G_B2_0;
	}

IL_0056:
	{
		G_B3_1->___x_2 = G_B3_0;
		// newRotation.y = lookY ? newRotation.y : originalRotation.y;
		bool L_15 = __this->___lookY_5;
		G_B4_0 = (&V_0);
		if (L_15)
		{
			G_B5_0 = (&V_0);
			goto IL_0072;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___originalRotation_8);
		float L_17 = L_16->___y_3;
		G_B6_0 = L_17;
		G_B6_1 = G_B4_0;
		goto IL_0078;
	}

IL_0072:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = L_18.___y_3;
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
	}

IL_0078:
	{
		G_B6_1->___y_3 = G_B6_0;
		// newRotation.z = lookZ ? newRotation.z : originalRotation.z;
		bool L_20 = __this->___lookZ_6;
		G_B7_0 = (&V_0);
		if (L_20)
		{
			G_B8_0 = (&V_0);
			goto IL_0094;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___originalRotation_8);
		float L_22 = L_21->___z_4;
		G_B9_0 = L_22;
		G_B9_1 = G_B7_0;
		goto IL_009a;
	}

IL_0094:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		float L_24 = L_23.___z_4;
		G_B9_0 = L_24;
		G_B9_1 = G_B8_0;
	}

IL_009a:
	{
		G_B9_1->___z_4 = G_B9_0;
		// transform.rotation = Quaternion.Euler(newRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_26, NULL);
		NullCheck(L_25);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_25, L_27, NULL);
		// }
		return;
	}
}
// System.Void LookAtPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer__ctor_m5A3A2CAFA412C0A18376DCE5C414F259704D869E (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 originalRotation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___originalRotation_8 = L_0;
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
// System.Void ManuallySelectObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManuallySelectObject_Awake_mECC7F8DBAA39EB6723BA90F38501763E9DCF308E (ManuallySelectObject_tABD8369DDA0D162EA1054765550650570BCDEF9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_m6B958DEC1174651AD374B68D4DAA338F700A9B6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interactor = GetComponent<XRBaseControllerInteractor>();
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_0;
		L_0 = Component_GetComponent_TisXRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_m6B958DEC1174651AD374B68D4DAA338F700A9B6C(__this, Component_GetComponent_TisXRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_m6B958DEC1174651AD374B68D4DAA338F700A9B6C_RuntimeMethod_var);
		__this->___interactor_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactor_5), (void*)L_0);
		// interactionManager = interactor.interactionManager;
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_1 = __this->___interactor_5;
		NullCheck(L_1);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_2;
		L_2 = XRBaseInteractor_get_interactionManager_mD7FB7431097431DD95D2333E58A5052DF106E09F_inline(L_1, NULL);
		__this->___interactionManager_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactionManager_6), (void*)L_2);
		// originalTriggerType = interactor.selectActionTrigger;
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_3 = __this->___interactor_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = XRBaseControllerInteractor_get_selectActionTrigger_mCB494C7BA0CBE50A36F058E35AA3AC521C9D2010_inline(L_3, NULL);
		__this->___originalTriggerType_7 = L_4;
		// }
		return;
	}
}
// System.Void ManuallySelectObject::ManuallySelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManuallySelectObject_ManuallySelect_mD68B742B68C3053CCEF88DE7A6C7F90707D61F13 (ManuallySelectObject_tABD8369DDA0D162EA1054765550650570BCDEF9E* __this, const RuntimeMethod* method) 
{
	{
		// interactable.gameObject.SetActive(true);
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_0 = __this->___interactable_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// interactor.selectActionTrigger = XRBaseControllerInteractor.InputTriggerType.StateChange;
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_2 = __this->___interactor_5;
		NullCheck(L_2);
		XRBaseControllerInteractor_set_selectActionTrigger_mED28C90236E93293019D4F9132AA5C3447861A88_inline(L_2, 1, NULL);
		// interactionManager.SelectEnter(interactor as IXRSelectInteractor, interactable);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_3 = __this->___interactionManager_6;
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_4 = __this->___interactor_5;
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_5 = __this->___interactable_4;
		NullCheck(L_3);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::SelectEnter(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable) */, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void ManuallySelectObject::ManuallyDeselect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManuallySelectObject_ManuallyDeselect_mA056DE4C5908BA81032A8F19AC9E5B6C5CEE67A4 (ManuallySelectObject_tABD8369DDA0D162EA1054765550650570BCDEF9E* __this, const RuntimeMethod* method) 
{
	{
		// interactionManager.SelectExit(interactor as IXRSelectInteractor, interactable);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_0 = __this->___interactionManager_6;
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_1 = __this->___interactor_5;
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_2 = __this->___interactable_4;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(31 /* System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::SelectExit(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable) */, L_0, L_1, L_2);
		// interactor.selectActionTrigger = originalTriggerType;
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_3 = __this->___interactor_5;
		int32_t L_4 = __this->___originalTriggerType_7;
		NullCheck(L_3);
		XRBaseControllerInteractor_set_selectActionTrigger_mED28C90236E93293019D4F9132AA5C3447861A88_inline(L_3, L_4, NULL);
		// interactable.gameObject.SetActive(false);
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_5 = __this->___interactable_4;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ManuallySelectObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManuallySelectObject__ctor_m0D637056064F8B862C3C34143A1D00E059F525CE (ManuallySelectObject_tABD8369DDA0D162EA1054765550650570BCDEF9E* __this, const RuntimeMethod* method) 
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
// System.Void MatchRotation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchRotation_Awake_m82BA1A52FA613D6E4BBF85CDC71B6588415855A0 (MatchRotation_t7C809963F833097235337A58F6BD74C0EBD2CAC7* __this, const RuntimeMethod* method) 
{
	{
		// originalRotation = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		__this->___originalRotation_8 = L_1;
		// }
		return;
	}
}
// System.Void MatchRotation::FollowRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchRotation_FollowRotation_m594BF1822FEB01BCCF9A326D0EF6222895ECBFA9 (MatchRotation_t7C809963F833097235337A58F6BD74C0EBD2CAC7* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B8_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B9_1 = NULL;
	{
		// Vector3 newRotation = targetTransform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___targetTransform_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		V_0 = L_1;
		// newRotation.x = matchX ? newRotation.x : originalRotation.x;
		bool L_2 = __this->___matchX_4;
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_0023;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___originalRotation_8);
		float L_4 = L_3->___x_2;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0023:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___x_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		G_B3_1->___x_2 = G_B3_0;
		// newRotation.y = matchY ? newRotation.y : originalRotation.y;
		bool L_7 = __this->___matchY_5;
		G_B4_0 = (&V_0);
		if (L_7)
		{
			G_B5_0 = (&V_0);
			goto IL_0045;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___originalRotation_8);
		float L_9 = L_8->___y_3;
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_004b;
	}

IL_0045:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___y_3;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_004b:
	{
		G_B6_1->___y_3 = G_B6_0;
		// newRotation.z = matchZ ? newRotation.z : originalRotation.z;
		bool L_12 = __this->___matchZ_6;
		G_B7_0 = (&V_0);
		if (L_12)
		{
			G_B8_0 = (&V_0);
			goto IL_0067;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___originalRotation_8);
		float L_14 = L_13->___z_4;
		G_B9_0 = L_14;
		G_B9_1 = G_B7_0;
		goto IL_006d;
	}

IL_0067:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = L_15.___z_4;
		G_B9_0 = L_16;
		G_B9_1 = G_B8_0;
	}

IL_006d:
	{
		G_B9_1->___z_4 = G_B9_0;
		// transform.rotation = Quaternion.Euler(newRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_18, NULL);
		NullCheck(L_17);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_17, L_19, NULL);
		// }
		return;
	}
}
// System.Void MatchRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchRotation__ctor_mBB5E5D36EBEFC1DCE3BFFC8D4DC5C7BA76FD971B (MatchRotation_t7C809963F833097235337A58F6BD74C0EBD2CAC7* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 originalRotation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___originalRotation_8 = L_0;
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
// System.Void MoveWithVelocity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithVelocity_Awake_m78B1AD4982D9B9BA9D35FA0C8CC69DF5EE2B855C (MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidBody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidBody_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidBody_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void MoveWithVelocity::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithVelocity_FixedUpdate_m1EDBAF002805FD7976F2CFB83D8DA61E5447EED0 (MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32* __this, const RuntimeMethod* method) 
{
	{
		// ApplyVelocity();
		MoveWithVelocity_ApplyVelocity_mE87B4D10AFBF0A9D659C715CA3DF42C247397020(__this, NULL);
		// }
		return;
	}
}
// System.Void MoveWithVelocity::ApplyVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithVelocity_ApplyVelocity_mE87B4D10AFBF0A9D659C715CA3DF42C247397020 (MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 targetVelocity = inputVelocity * speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___inputVelocity_6;
		float L_1 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// targetVelocity = origin.TransformDirection(targetVelocity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___origin_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_3, L_4, NULL);
		V_0 = L_5;
		// Vector3 velocityChange = targetVelocity - rigidBody.velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rigidBody_7;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// rigidBody.AddForce(velocityChange, ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rigidBody_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_10, L_11, 2, NULL);
		// }
		return;
	}
}
// System.Void MoveWithVelocity::SetRightVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithVelocity_SetRightVelocity_mC592903A7B0762BA7D704A6CF0A2D7FD1E0DB05A (MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// inputVelocity.x = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___inputVelocity_6);
		float L_1 = ___0_value;
		L_0->___x_2 = L_1;
		// }
		return;
	}
}
// System.Void MoveWithVelocity::SetForwardVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithVelocity_SetForwardVelocity_m10C3891C4536E22995E11283EFD28037863E067B (MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// inputVelocity.z = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___inputVelocity_6);
		float L_1 = ___0_value;
		L_0->___z_4 = L_1;
		// }
		return;
	}
}
// System.Void MoveWithVelocity::SetUpVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithVelocity_SetUpVelocity_mFED2BBDDB566C929B4E4A31E5A5F9C42F73AB8B0 (MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// inputVelocity.y = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___inputVelocity_6);
		float L_1 = ___0_value;
		L_0->___y_3 = L_1;
		// }
		return;
	}
}
// System.Void MoveWithVelocity::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithVelocity_OnValidate_m7CF8F309FC2C7D856400F7C4FBCD46CFDEB15653 (MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!origin)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___origin_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// origin = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___origin_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___origin_5), (void*)L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void MoveWithVelocity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveWithVelocity__ctor_m8FB74E753F920146F8B055F1B8FBF67779375308 (MoveWithVelocity_tCA613535942C07C0889A667EB6DBF58EAA61EB32* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1.0f;
		__this->___speed_4 = (1.0f);
		// private Vector3 inputVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___inputVelocity_6 = L_0;
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
// System.Void PlayAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAnimation_Awake_m594BBA0970539B72C0A56121731BDCF9F0A676DA (PlayAnimation_tCCD8EE98B50E72DCDE8C989F6E646FFFDAA9879C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayAnimation::SetBoolTrue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAnimation_SetBoolTrue_m6359323B4B9CE0ECE084917CCA675BF754EA7AD5 (PlayAnimation_tCCD8EE98B50E72DCDE8C989F6E646FFFDAA9879C* __this, String_t* ___0_parameter, const RuntimeMethod* method) 
{
	{
		// animator.SetBool(parameter, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_4;
		String_t* L_1 = ___0_parameter;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayAnimation::SetBoolFalse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAnimation_SetBoolFalse_mAA2AB0F3490212B29E1C10E6AA2B88990D61742A (PlayAnimation_tCCD8EE98B50E72DCDE8C989F6E646FFFDAA9879C* __this, String_t* ___0_parameter, const RuntimeMethod* method) 
{
	{
		// animator.SetBool(parameter, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_4;
		String_t* L_1 = ___0_parameter;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayAnimation::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAnimation_SetTrigger_mE6FF7F96A45B1327F3B5A0615AD2BE60B74C786F (PlayAnimation_tCCD8EE98B50E72DCDE8C989F6E646FFFDAA9879C* __this, String_t* ___0_parameter, const RuntimeMethod* method) 
{
	{
		// animator.SetTrigger(parameter);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_4;
		String_t* L_1 = ___0_parameter;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAnimation__ctor_mC0E53004442DD01B0C560410FB3E2C97327CB944 (PlayAnimation_tCCD8EE98B50E72DCDE8C989F6E646FFFDAA9879C* __this, const RuntimeMethod* method) 
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
// System.Void PlayContinuousSound::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_Awake_mC24BAD8E0F9890D2BBC8F17D0DA13EF36451553C (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_7), (void*)L_0);
		// audioSource.volume = volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioSource_7;
		float L_2 = __this->___volume_6;
		NullCheck(L_1);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayContinuousSound::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_Start_mE9004587F3089646A75BD1AA14FD7F1D927E9DD5 (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) 
{
	{
		// if (playOnStart)
		bool L_0 = __this->___playOnStart_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Play();
		PlayContinuousSound_Play_m99DB632976F663760E285DA8A0E838288F2BFE77(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void PlayContinuousSound::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_Play_m99DB632976F663760E285DA8A0E838288F2BFE77 (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.clip = sound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___sound_4;
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_7;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayContinuousSound::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_Pause_mB41628A030E1BE7B30A83EAF9EF58B8BA1DF2C0C (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.clip = null;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_7;
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, NULL);
		// audioSource.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioSource_7;
		NullCheck(L_1);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayContinuousSound::PlayWithExclusivity(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_PlayWithExclusivity_m4615C7D83AE03B7A991D292F4E0D98709787BB1D (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_owner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentOwner == null)
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___currentOwner_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// currentOwner = owner;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = ___0_owner;
		__this->___currentOwner_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentOwner_8), (void*)L_2);
		// Play();
		PlayContinuousSound_Play_m99DB632976F663760E285DA8A0E838288F2BFE77(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void PlayContinuousSound::StopWithExclusivity(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_StopWithExclusivity_mD11EFA9BC7491F8B8DBFB85D81715D702B85713E (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_owner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentOwner == owner)
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___currentOwner_8;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = ___0_owner;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// currentOwner = null;
		__this->___currentOwner_8 = (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentOwner_8), (void*)(MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL);
		// Pause();
		PlayContinuousSound_Pause_mB41628A030E1BE7B30A83EAF9EF58B8BA1DF2C0C(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void PlayContinuousSound::TogglePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_TogglePlay_m50C6CBD99C2D853D844CE7E92EA207561FF2B8AA (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool isPlaying = !IsPlaying();
		bool L_0;
		L_0 = PlayContinuousSound_IsPlaying_mF9BCCFF25ABB399CF1B003F7E145134617B58279(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// SetPlay(isPlaying);
		bool L_1 = V_0;
		PlayContinuousSound_SetPlay_m376F3113B0BCF6EE9F1114CC3D13376C4116E745(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayContinuousSound::SetPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_SetPlay_m376F3113B0BCF6EE9F1114CC3D13376C4116E745 (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, bool ___0_playAudio, const RuntimeMethod* method) 
{
	{
		// if (playAudio)
		bool L_0 = ___0_playAudio;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// Play();
		PlayContinuousSound_Play_m99DB632976F663760E285DA8A0E838288F2BFE77(__this, NULL);
		return;
	}

IL_000a:
	{
		// Pause();
		PlayContinuousSound_Pause_mB41628A030E1BE7B30A83EAF9EF58B8BA1DF2C0C(__this, NULL);
		// }
		return;
	}
}
// System.Boolean PlayContinuousSound::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayContinuousSound_IsPlaying_mF9BCCFF25ABB399CF1B003F7E145134617B58279 (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) 
{
	{
		// return audioSource.isPlaying;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayContinuousSound::SetClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_SetClip_m2B4DA98DFAAC392B4806BF87CD7B9A8A0D908E32 (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_audioClip, const RuntimeMethod* method) 
{
	{
		// sound = audioClip;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_audioClip;
		__this->___sound_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sound_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayContinuousSound::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound_OnValidate_m8BFC33CC7DBCB27BCD603C5B56DD66023F90D7D0 (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioSource audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		// audioSource.playOnAwake = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0;
		NullCheck(L_1);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_1, (bool)0, NULL);
		// audioSource.loop = true;
		NullCheck(L_1);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayContinuousSound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayContinuousSound__ctor_mD5399E7D3E20450A5D56E33FE4A1915211651A5F (PlayContinuousSound_t9A0BAFD07E1BADD94EFF90449FD653BFFC90E9DF* __this, const RuntimeMethod* method) 
{
	{
		// public float volume = 1.0f;
		__this->___volume_6 = (1.0f);
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
// System.Void PlayQuickSound::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayQuickSound_Awake_m06B6F6427CA3FF121B03F8D8EDD6FCDB140C5B6A (PlayQuickSound_t26E807A873D4BDBEF9CF2BB1E64CEF0C0365FC7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayQuickSound::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayQuickSound_Play_m359E4AD1EE870401120EE0DE07A0F8C24E6B3113 (PlayQuickSound_t26E807A873D4BDBEF9CF2BB1E64CEF0C0365FC7C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float randomVariance = Random.Range(-randomPitchVariance, randomPitchVariance);
		float L_0 = __this->___randomPitchVariance_6;
		float L_1 = __this->___randomPitchVariance_6;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_0)), L_1, NULL);
		V_0 = L_2;
		// randomVariance += defaultPitch;
		float L_3 = V_0;
		float L_4 = __this->___defaultPitch_8;
		V_0 = ((float)il2cpp_codegen_add(L_3, L_4));
		// audioSource.pitch = randomVariance;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___audioSource_7;
		float L_6 = V_0;
		NullCheck(L_5);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_5, L_6, NULL);
		// audioSource.PlayOneShot(sound, volume);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___audioSource_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = __this->___sound_4;
		float L_9 = __this->___volume_5;
		NullCheck(L_7);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_7, L_8, L_9, NULL);
		// audioSource.pitch = defaultPitch;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___audioSource_7;
		float L_11 = __this->___defaultPitch_8;
		NullCheck(L_10);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void PlayQuickSound::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayQuickSound_OnValidate_m88F89CD0BDEB0A3C1D0CA9A56D2DFF8F0AAD2848 (PlayQuickSound_t26E807A873D4BDBEF9CF2BB1E64CEF0C0365FC7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioSource audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		// audioSource.playOnAwake = false;
		NullCheck(L_0);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayQuickSound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayQuickSound__ctor_m872451CBF4DCD02304D427C55129AC7D8580E45C (PlayQuickSound_t26E807A873D4BDBEF9CF2BB1E64CEF0C0365FC7C* __this, const RuntimeMethod* method) 
{
	{
		// public float volume = 1.0f;
		__this->___volume_5 = (1.0f);
		// private float defaultPitch = 1.0f;
		__this->___defaultPitch_8 = (1.0f);
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
// System.Void PlaySoundsFromList::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_Awake_m029EBCA142068794BE92D8C2BC044792FDC83D76 (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlaySoundsFromList::NextClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_NextClip_m7560D5C2F460BAA73175B2C0E262C36CAB39A7CA (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// index = ++index % audioClips.Count;
		int32_t L_0 = __this->___index_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___index_7 = L_1;
		int32_t L_2 = V_0;
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_3 = __this->___audioClips_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline(L_3, List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		__this->___index_7 = ((int32_t)(L_2%L_4));
		// PlayClip();
		PlaySoundsFromList_PlayClip_mE5491DBA1BDC6A5A174710189B0981D5015CB434(__this, NULL);
		// }
		return;
	}
}
// System.Void PlaySoundsFromList::PreviousClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_PreviousClip_mB78E3C3FD5305511304A181C7E2C81AF780A90F7 (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// index = --index % audioClips.Count;
		int32_t L_0 = __this->___index_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		__this->___index_7 = L_1;
		int32_t L_2 = V_0;
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_3 = __this->___audioClips_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline(L_3, List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		__this->___index_7 = ((int32_t)(L_2%L_4));
		// PlayClip();
		PlaySoundsFromList_PlayClip_mE5491DBA1BDC6A5A174710189B0981D5015CB434(__this, NULL);
		// }
		return;
	}
}
// System.Void PlaySoundsFromList::RandomClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_RandomClip_m7B52712EED666F0C2B53F0D134BB5E4B17444093 (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index = Random.Range(0, audioClips.Count);
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_0 = __this->___audioClips_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline(L_0, List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_1, NULL);
		__this->___index_7 = L_2;
		// PlayClip();
		PlaySoundsFromList_PlayClip_mE5491DBA1BDC6A5A174710189B0981D5015CB434(__this, NULL);
		// }
		return;
	}
}
// System.Void PlaySoundsFromList::PlayAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_PlayAtIndex_m1F94A0C8A4516C00B3407710428F92AB5BC7F52E (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index = Mathf.Clamp(value, 0, audioClips.Count);
		int32_t L_0 = ___0_value;
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_1 = __this->___audioClips_5;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_inline(L_1, List_1_get_Count_mD6AEFC7D3D92928AFB598DEEC68561D8A621CB8F_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, 0, L_2, NULL);
		__this->___index_7 = L_3;
		// PlayClip();
		PlaySoundsFromList_PlayClip_mE5491DBA1BDC6A5A174710189B0981D5015CB434(__this, NULL);
		// }
		return;
	}
}
// System.Void PlaySoundsFromList::PauseClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_PauseClip_m1A2B0B65E0938551B041B5F7996F59C447DF4AAE (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_6;
		NullCheck(L_0);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlaySoundsFromList::StopClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_StopClip_mE67AB6219D227C076FAC49D79FF2DA74DBA1BD0D (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_6;
		NullCheck(L_0);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlaySoundsFromList::PlayCurrentClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_PlayCurrentClip_m3CEBEB6F05BD45EA324970BA3FCAA88994E9CBF7 (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) 
{
	{
		// PlayClip();
		PlaySoundsFromList_PlayClip_mE5491DBA1BDC6A5A174710189B0981D5015CB434(__this, NULL);
		// }
		return;
	}
}
// System.Void PlaySoundsFromList::PlayClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_PlayClip_mE5491DBA1BDC6A5A174710189B0981D5015CB434 (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource.clip = audioClips[Mathf.Abs(index)];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_6;
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_1 = __this->___audioClips_5;
		int32_t L_2 = __this->___index_7;
		int32_t L_3;
		L_3 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(L_2, NULL);
		NullCheck(L_1);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53(L_1, L_3, List_1_get_Item_mCCE271ACC0B0DF33B9B7D509E4BE078661DECF53_RuntimeMethod_var);
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_4, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___audioSource_6;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// }
		return;
	}
}
// System.Void PlaySoundsFromList::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList_OnValidate_mC81AE2F45A09FEFF7F07F3D3C524B0ACFC29C67E (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioSource audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		// audioSource.loop = shouldLoop;
		bool L_1 = __this->___shouldLoop_4;
		NullCheck(L_0);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlaySoundsFromList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaySoundsFromList__ctor_m1CD47FCFD31AF0EB70896B5358BB5B273E26D9B2 (PlaySoundsFromList_t521F03E2B74C730AE107E3D4D1A0161B72BCEA1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m985F72633850464A3301F658B9CD510F7ADCDC33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<AudioClip> audioClips = new List<AudioClip>();
		List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* L_0 = (List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F*)il2cpp_codegen_object_new(List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m985F72633850464A3301F658B9CD510F7ADCDC33(L_0, List_1__ctor_m985F72633850464A3301F658B9CD510F7ADCDC33_RuntimeMethod_var);
		__this->___audioClips_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioClips_5), (void*)L_0);
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
// System.Void PlayVideo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_Awake_mC9F48DB3FF2F2333C9F743A92772D961F54458A4 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E0A847F4BD98D8476EEBA04F11F8AFBA671E646_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___meshRenderer_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_8), (void*)L_0);
		// videoPlayer = GetComponent<VideoPlayer>();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1;
		L_1 = Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA(__this, Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA_RuntimeMethod_var);
		__this->___videoPlayer_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___videoPlayer_7), (void*)L_1);
		// if (videoClips.Count > 0)
		List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* L_2 = __this->___videoClips_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_inline(L_2, List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		// videoPlayer.clip = videoClips[0];
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_4 = __this->___videoPlayer_7;
		List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* L_5 = __this->___videoClips_6;
		NullCheck(L_5);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_6;
		L_6 = List_1_get_Item_m3E0A847F4BD98D8476EEBA04F11F8AFBA671E646(L_5, 0, List_1_get_Item_m3E0A847F4BD98D8476EEBA04F11F8AFBA671E646_RuntimeMethod_var);
		NullCheck(L_4);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_4, L_6, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void PlayVideo::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_OnEnable_mFF3C790DB6EEFD7A14ABF7F15504EE34A1061919 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayVideo_ApplyVideoMaterial_m412B937CC12FF2564DE40321E2E7DD367CA7F1A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// videoPlayer.prepareCompleted += ApplyVideoMaterial;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_7;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)il2cpp_codegen_object_new(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler__ctor_mFCF62E0BB29DD3D2B2F1306BD8657E374CF60903(L_1, __this, (intptr_t)((void*)PlayVideo_ApplyVideoMaterial_m412B937CC12FF2564DE40321E2E7DD367CA7F1A1_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VideoPlayer_add_prepareCompleted_m4DB8843A3E3E3CFF7E361E70EA51983AF457183B(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_OnDisable_m0600167B83AAB5A5D49EA3E0E94D27A224CF0E69 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayVideo_ApplyVideoMaterial_m412B937CC12FF2564DE40321E2E7DD367CA7F1A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// videoPlayer.prepareCompleted -= ApplyVideoMaterial;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_7;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)il2cpp_codegen_object_new(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler__ctor_mFCF62E0BB29DD3D2B2F1306BD8657E374CF60903(L_1, __this, (intptr_t)((void*)PlayVideo_ApplyVideoMaterial_m412B937CC12FF2564DE40321E2E7DD367CA7F1A1_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VideoPlayer_remove_prepareCompleted_mDA77FE81F97195666D407DBB5689F8289A0513DF(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_Start_m7491116EDC7DD84B12BB33AD08D612A2E7C47271 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	{
		// if (playAtStart)
		bool L_0 = __this->___playAtStart_4;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Play();
		PlayVideo_Play_m618D7CB762D3B48A5A736DB664C0AB04DF841EB6(__this, NULL);
		return;
	}

IL_000f:
	{
		// Stop();
		PlayVideo_Stop_m81FE1707CC9ED5438A8F4A38A078A9991E5FFA8C(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::NextClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_NextClip_mC4B6E27E074EA6697025C60EE23757661D3992F5 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// index = ++index % videoClips.Count;
		int32_t L_0 = __this->___index_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___index_9 = L_1;
		int32_t L_2 = V_0;
		List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* L_3 = __this->___videoClips_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_inline(L_3, List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		__this->___index_9 = ((int32_t)(L_2%L_4));
		// Play();
		PlayVideo_Play_m618D7CB762D3B48A5A736DB664C0AB04DF841EB6(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::PreviousClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_PreviousClip_mEBF9A23BAA52DA0CA861E83B11D4B58B038BEAD6 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// index = --index % videoClips.Count;
		int32_t L_0 = __this->___index_9;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		__this->___index_9 = L_1;
		int32_t L_2 = V_0;
		List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* L_3 = __this->___videoClips_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_inline(L_3, List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		__this->___index_9 = ((int32_t)(L_2%L_4));
		// Play();
		PlayVideo_Play_m618D7CB762D3B48A5A736DB664C0AB04DF841EB6(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::RandomClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_RandomClip_m9BA92B3CABD37AC798A94F07A6B4DB28CEA0B8B7 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (videoClips.Count > 0)
		List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* L_0 = __this->___videoClips_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_inline(L_0, List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		// index = Random.Range(0, videoClips.Count);
		List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* L_2 = __this->___videoClips_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_inline(L_2, List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_3, NULL);
		__this->___index_9 = L_4;
		// Play();
		PlayVideo_Play_m618D7CB762D3B48A5A736DB664C0AB04DF841EB6(__this, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void PlayVideo::PlayAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_PlayAtIndex_mAB658D9F5F08E0C23F8A51A1ACFF7A648EEDA747 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (videoClips.Count > 0)
		List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* L_0 = __this->___videoClips_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_inline(L_0, List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// index = Mathf.Clamp(value, 0, videoClips.Count);
		int32_t L_2 = ___0_value;
		List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* L_3 = __this->___videoClips_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_inline(L_3, List_1_get_Count_m4C3FA3A38349E8B3D27D5167780F883E4F0F8689_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_2, 0, L_4, NULL);
		__this->___index_9 = L_5;
		// Play();
		PlayVideo_Play_m618D7CB762D3B48A5A736DB664C0AB04DF841EB6(__this, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void PlayVideo::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_Play_m618D7CB762D3B48A5A736DB664C0AB04DF841EB6 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	{
		// videoMaterial.color = Color.white;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___videoMaterial_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_0);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_0, L_1, NULL);
		// videoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___videoPlayer_7;
		NullCheck(L_2);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_Stop_m81FE1707CC9ED5438A8F4A38A078A9991E5FFA8C (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	{
		// videoMaterial.color = Color.black;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___videoMaterial_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_0);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_0, L_1, NULL);
		// videoPlayer.Stop();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___videoPlayer_7;
		NullCheck(L_2);
		VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1(L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::TogglePlayStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_TogglePlayStop_m7D2A6848323B988472F795272B53DE157B503CB0 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool isPlaying = !videoPlayer.isPlaying;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// SetPlay(isPlaying);
		bool L_2 = V_0;
		PlayVideo_SetPlay_mB01090239CE7C7F6CE7FBF2A64E2336DFCD9CF41(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::TogglePlayPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_TogglePlayPause_m71B127F292049F6014F99F0293478CA49894C8B8 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	{
		// if (videoPlayer.isPlaying)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// videoPlayer.Pause();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___videoPlayer_7;
		NullCheck(L_2);
		VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E(L_2, NULL);
		return;
	}

IL_0019:
	{
		// Play();
		PlayVideo_Play_m618D7CB762D3B48A5A736DB664C0AB04DF841EB6(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::SetPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_SetPlay_mB01090239CE7C7F6CE7FBF2A64E2336DFCD9CF41 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// Play();
		PlayVideo_Play_m618D7CB762D3B48A5A736DB664C0AB04DF841EB6(__this, NULL);
		return;
	}

IL_000a:
	{
		// Stop();
		PlayVideo_Stop_m81FE1707CC9ED5438A8F4A38A078A9991E5FFA8C(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::ApplyVideoMaterial(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_ApplyVideoMaterial_m412B937CC12FF2564DE40321E2E7DD367CA7F1A1 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	{
		// meshRenderer.material = videoMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___videoMaterial_5;
		NullCheck(L_0);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayVideo::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo_OnValidate_m03792BD8C2690903A810DF1536FEF03521AC2F38 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B4FEEFA76B93D58B6E47CD9FF76F6E287D0D321);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	{
		// var mat = new Material(Shader.Find("Universal Render Pipeline/Lit"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral9B4FEEFA76B93D58B6E47CD9FF76F6E287D0D321, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		V_0 = L_1;
		// videoMaterial = mat;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = V_0;
		__this->___videoMaterial_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___videoMaterial_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void PlayVideo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayVideo__ctor_m12D7A6FF63237382D2F34B45F32BCAC81191FF98 (PlayVideo_t1E932CC36A970D84F71F48295C5CF99A5AE176A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD989BBCBB7E44CA5FFDAB264CD4A443557B51E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<VideoClip> videoClips = new List<VideoClip>();
		List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6* L_0 = (List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6*)il2cpp_codegen_object_new(List_1_tC7F85CC360116B3D6B0AD8E08E553C0253E731C6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD989BBCBB7E44CA5FFDAB264CD4A443557B51E7A(L_0, List_1__ctor_mD989BBCBB7E44CA5FFDAB264CD4A443557B51E7A_RuntimeMethod_var);
		__this->___videoClips_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___videoClips_6), (void*)L_0);
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
// System.Void RemoveObjectsWithTag::RemoveObjects(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveObjectsWithTag_RemoveObjects_m30C18DEC984ED06B7231E91421BBA6F79A4F1E51 (RemoveObjectsWithTag_t602A70BDB91393734E2A341F8D847BBE66D10408* __this, String_t* ___0_tag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GameObject[] taggedObjects = GameObject.FindGameObjectsWithTag(tag);
		String_t* L_0 = ___0_tag;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(L_0, NULL);
		// foreach (GameObject targetObject in taggedObjects)
		V_0 = L_1;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (GameObject targetObject in taggedObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Destroy(targetObject);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0017:
	{
		// foreach (GameObject targetObject in taggedObjects)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RemoveObjectsWithTag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveObjectsWithTag__ctor_mA3D72AB2E55438AC75DC288B51F74C54344BD0A4 (RemoveObjectsWithTag_t602A70BDB91393734E2A341F8D847BBE66D10408* __this, const RuntimeMethod* method) 
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
// System.Void RotateObject::SetIsRotating(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_SetIsRotating_m4BA4E36BD48ED2834DFF67955B0D1E7A65A26423 (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if(value)
		bool L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// Begin();
		RotateObject_Begin_mA6F7360BEBCDB4741326EC7213B6BF8C1CA4669E(__this, NULL);
		return;
	}

IL_000a:
	{
		// End();
		RotateObject_End_m6FC122D48DFFFE24D5BD3DE5F2652782EA5E381E(__this, NULL);
		// }
		return;
	}
}
// System.Void RotateObject::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_Begin_mA6F7360BEBCDB4741326EC7213B6BF8C1CA4669E (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) 
{
	{
		// isRotating = true;
		__this->___isRotating_6 = (bool)1;
		// }
		return;
	}
}
// System.Void RotateObject::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_End_m6FC122D48DFFFE24D5BD3DE5F2652782EA5E381E (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) 
{
	{
		// isRotating = false;
		__this->___isRotating_6 = (bool)0;
		// }
		return;
	}
}
// System.Void RotateObject::ToggleRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_ToggleRotate_mC12DC355A445F3466DCDD4F91EECF580CD18D49B (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) 
{
	{
		// isRotating = !isRotating;
		bool L_0 = __this->___isRotating_6;
		__this->___isRotating_6 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void RotateObject::SetSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_SetSpeed_m959DB1E8AE580CF04E832543654D89035DF7B6B8 (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// sensitivity = Mathf.Clamp(value, 0, 1);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.0f), (1.0f), NULL);
		__this->___sensitivity_4 = L_1;
		// isRotating = (sensitivity * speed) != 0.0f;
		float L_2 = __this->___sensitivity_4;
		float L_3 = __this->___speed_5;
		__this->___isRotating_6 = (bool)((((int32_t)((((float)((float)il2cpp_codegen_multiply(L_2, L_3))) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void RotateObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_Update_mECF506F1D0575C45638D5E97A9352E88D2DB4530 (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) 
{
	{
		// if (isRotating)
		bool L_0 = __this->___isRotating_6;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Rotate();
		RotateObject_Rotate_m5114C557725C3020E7AF30058082C463134B80D9(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void RotateObject::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_Rotate_m5114C557725C3020E7AF30058082C463134B80D9 (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(transform.up, (sensitivity * speed) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_1, NULL);
		float L_3 = __this->___sensitivity_4;
		float L_4 = __this->___speed_5;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_0, L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), NULL);
		// }
		return;
	}
}
// System.Void RotateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject__ctor_m47FED6A0A715C09D80A746CF61B770974AFB89A9 (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0, 1)] public float sensitivity = 1.0f;
		__this->___sensitivity_4 = (1.0f);
		// public float speed = 10.0f;
		__this->___speed_5 = (10.0f);
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
// System.Void ScaleObject::ApplyTargetScale(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleObject_ApplyTargetScale_m9AF570B8F219775FE973F529BC19E6DDAFE19BDA (ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9* __this, XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___0_interactable, const RuntimeMethod* method) 
{
	{
		// originalScale = interactable.transform.localScale;
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_0 = ___0_interactable;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		__this->___originalScale_5 = L_2;
		// interactable.transform.localScale = targetScale;
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_3 = ___0_interactable;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___targetScale_4;
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void ScaleObject::ResetScale(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleObject_ResetScale_m8466023A09E0974CE5F312848B0542DAF58E9615 (ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9* __this, XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___0_interactable, const RuntimeMethod* method) 
{
	{
		// interactable.transform.localScale = originalScale;
		XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* L_0 = ___0_interactable;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___originalScale_5;
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_2, NULL);
		// originalScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___originalScale_5 = L_3;
		// }
		return;
	}
}
// System.Void ScaleObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleObject__ctor_m3EC259093FDA3FE7380BB21FFD6F49ED1517ED08 (ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 targetScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___targetScale_4 = L_0;
		// private Vector3 originalScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___originalScale_5 = L_1;
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
// System.Void SetInteractionLayer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetInteractionLayer_Awake_mFA7FE11CEB559575D490BC036E346F149A1D9256 (SetInteractionLayer_t5E00392265D7B35E14F5BA8448FF93D8FC6E58C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_m088F2113B7849794EAF31AF1D03D29BFDDC29316_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interactor = GetComponent<XRBaseInteractor>();
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0;
		L_0 = Component_GetComponent_TisXRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_m088F2113B7849794EAF31AF1D03D29BFDDC29316(__this, Component_GetComponent_TisXRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_m088F2113B7849794EAF31AF1D03D29BFDDC29316_RuntimeMethod_var);
		__this->___interactor_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactor_5), (void*)L_0);
		// originalLayer = interactor.interactionLayers;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1 = __this->___interactor_5;
		NullCheck(L_1);
		InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 L_2;
		L_2 = XRBaseInteractor_get_interactionLayers_m83DCB38A70922078AEBD323EBD7EDBEB6A70D00D_inline(L_1, NULL);
		__this->___originalLayer_6 = L_2;
		// }
		return;
	}
}
// System.Void SetInteractionLayer::SetTargetLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetInteractionLayer_SetTargetLayer_mC501BDC7394331EBDA42BA30F267A4774BE00EA2 (SetInteractionLayer_t5E00392265D7B35E14F5BA8448FF93D8FC6E58C5* __this, const RuntimeMethod* method) 
{
	{
		// interactor.interactionLayers = targetLayer;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___interactor_5;
		InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 L_1 = __this->___targetLayer_4;
		NullCheck(L_0);
		XRBaseInteractor_set_interactionLayers_mA988AF491A54DB866194C07D5E374780543B77D8_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SetInteractionLayer::SetOriginalLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetInteractionLayer_SetOriginalLayer_mF7F6ECEDA3D168A4B251209BE3B4AEEEC67E9664 (SetInteractionLayer_t5E00392265D7B35E14F5BA8448FF93D8FC6E58C5* __this, const RuntimeMethod* method) 
{
	{
		// interactor.interactionLayers = originalLayer;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___interactor_5;
		InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 L_1 = __this->___originalLayer_6;
		NullCheck(L_0);
		XRBaseInteractor_set_interactionLayers_mA988AF491A54DB866194C07D5E374780543B77D8_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SetInteractionLayer::ToggleTargetLayer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetInteractionLayer_ToggleTargetLayer_m2AD878C0C40ABE62BA6E2530EC7BD02044594F91 (SetInteractionLayer_t5E00392265D7B35E14F5BA8448FF93D8FC6E58C5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// SetTargetLayer();
		SetInteractionLayer_SetTargetLayer_mC501BDC7394331EBDA42BA30F267A4774BE00EA2(__this, NULL);
		return;
	}

IL_000a:
	{
		// SetOriginalLayer();
		SetInteractionLayer_SetOriginalLayer_mF7F6ECEDA3D168A4B251209BE3B4AEEEC67E9664(__this, NULL);
		// }
		return;
	}
}
// System.Void SetInteractionLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetInteractionLayer__ctor_mAB6C7838FB72FB38C819BD0ACED03EB12AA95E40 (SetInteractionLayer_t5E00392265D7B35E14F5BA8448FF93D8FC6E58C5* __this, const RuntimeMethod* method) 
{
	{
		// public InteractionLayerMask targetLayer = 0;
		InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 L_0;
		L_0 = InteractionLayerMask_op_Implicit_m6FF8E1165F1A46181E485809C17FF45A3B0C00BA(0, NULL);
		__this->___targetLayer_4 = L_0;
		// private InteractionLayerMask originalLayer = 0;
		InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 L_1;
		L_1 = InteractionLayerMask_op_Implicit_m6FF8E1165F1A46181E485809C17FF45A3B0C00BA(0, NULL);
		__this->___originalLayer_6 = L_1;
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
// System.Void SetLightColor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLightColor_Awake_m1C6433989805C12F92BBD6C89FEBD9DB171B11D5 (SetLightColor_tF15F09A9B909AC351E0C1FEADCA6D41E12472892* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentLight = GetComponent<Light>();
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		__this->___currentLight_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLight_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SetLightColor::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLightColor_SetColor_m385D4CF1F7AA73ED9A35CDACB278B642C5680AE4 (SetLightColor_tF15F09A9B909AC351E0C1FEADCA6D41E12472892* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// currentLight.color = color;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___currentLight_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		NullCheck(L_0);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SetLightColor::SetHue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLightColor_SetHue_mDCFD8B341E8700CFFA915D614E879ECD676160DF (SetLightColor_tF15F09A9B909AC351E0C1FEADCA6D41E12472892* __this, float ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Color.RGBToHSV(currentLight.color, out _, out float s, out float v);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___currentLight_4;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_0, NULL);
		Color_RGBToHSV_m10DD6CE937F04FE322EED0E154C1D7D6933EA2F8(L_1, (&V_3), (&V_0), (&V_1), NULL);
		// value = Mathf.Clamp(value, 0, 1);
		float L_2 = ___0_value;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), (1.0f), NULL);
		___0_value = L_3;
		// Color newColor = Color.HSVToRGB(value, s, v);
		float L_4 = ___0_value;
		float L_5 = V_0;
		float L_6 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(L_4, L_5, L_6, NULL);
		V_2 = L_7;
		// currentLight.color = newColor;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = __this->___currentLight_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_2;
		NullCheck(L_8);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void SetLightColor::ResetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLightColor_ResetColor_m0873C83872027091DB77AD2B63AC3FF4CE80FCAB (SetLightColor_tF15F09A9B909AC351E0C1FEADCA6D41E12472892* __this, const RuntimeMethod* method) 
{
	{
		// currentLight.color = Color.white;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___currentLight_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_0);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SetLightColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLightColor__ctor_m79B733E1746A4EE5A4B6D18DA785EA755FAE72B8 (SetLightColor_tF15F09A9B909AC351E0C1FEADCA6D41E12472892* __this, const RuntimeMethod* method) 
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
// System.Void SetLightIntensity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLightIntensity_Awake_m6C23172B8CB52D9E706A19ED7753CA32324A460D (SetLightIntensity_t506002EEE8C224C0FC1774722D26BF14844C9BAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentLight = GetComponent<Light>();
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		__this->___currentLight_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLight_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SetLightIntensity::SetIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLightIntensity_SetIntensity_m022B9B994EB9A766862547231F3F6DDDD3C73658 (SetLightIntensity_t506002EEE8C224C0FC1774722D26BF14844C9BAE* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// currentLight.intensity = value;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___currentLight_4;
		float L_1 = ___0_value;
		NullCheck(L_0);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SetLightIntensity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLightIntensity__ctor_m014BF4FF98F44BE180FA495E850FBE0A42AC7D1B (SetLightIntensity_t506002EEE8C224C0FC1774722D26BF14844C9BAE* __this, const RuntimeMethod* method) 
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
// System.Void SetMaterialColor::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMaterialColor_SetColor_m682168F6491A981C669C3D19A608182EBEB164B8 (SetMaterialColor_t3AC40388F8FDAD9C4640B9A301CD8AB16D610CC3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// material.color = color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		NullCheck(L_0);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SetMaterialColor::SetHue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMaterialColor_SetHue_m6F6FEBD8811AA52DF94AEAB636987431C3B3458A (SetMaterialColor_t3AC40388F8FDAD9C4640B9A301CD8AB16D610CC3* __this, float ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Color.RGBToHSV(material.color, out _, out float s, out float v);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_4;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_0, NULL);
		Color_RGBToHSV_m10DD6CE937F04FE322EED0E154C1D7D6933EA2F8(L_1, (&V_3), (&V_0), (&V_1), NULL);
		// value = Mathf.Clamp(value, 0, 1);
		float L_2 = ___0_value;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), (1.0f), NULL);
		___0_value = L_3;
		// Color newColor = Color.HSVToRGB(value, s, v);
		float L_4 = ___0_value;
		float L_5 = V_0;
		float L_6 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(L_4, L_5, L_6, NULL);
		V_2 = L_7;
		// material.color = newColor;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___material_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_2;
		NullCheck(L_8);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void SetMaterialColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMaterialColor__ctor_m15A3AB76EC5E8685076A067FCC17B33BB0B09ABD (SetMaterialColor_t3AC40388F8FDAD9C4640B9A301CD8AB16D610CC3* __this, const RuntimeMethod* method) 
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
// System.Void SetParticleRate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetParticleRate_Awake_mD555265E02627B6E38D3FB2A1C5CDDD929D084FE (SetParticleRate_tFD89152D0516428E5FA3A87B6615D15A80E8B04E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentParticleSystem = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0;
		L_0 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___currentParticleSystem_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentParticleSystem_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SetParticleRate::SetRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetParticleRate_SetRate_mD3014EDE215573DFEE372C08B15EE73320950683 (SetParticleRate_tFD89152D0516428E5FA3A87B6615D15A80E8B04E* __this, float ___0_value, const RuntimeMethod* method) 
{
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ParticleSystem.EmissionModule emission = currentParticleSystem.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___currentParticleSystem_4;
		NullCheck(L_0);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_1;
		L_1 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_0, NULL);
		V_0 = L_1;
		// emission.rateOverTime = value;
		float L_2 = ___0_value;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_3;
		L_3 = MinMaxCurve_op_Implicit_m133028E91CF2F823F5E20F6B19A3332A02404086(L_2, NULL);
		EmissionModule_set_rateOverTime_m71BF3C0A80EA572CD87EFF5944E8FA680F51DC20((&V_0), L_3, NULL);
		// }
		return;
	}
}
// System.Void SetParticleRate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetParticleRate__ctor_m562D1CE55827091D2503A6EF41CB1C5E697608E0 (SetParticleRate_tFD89152D0516428E5FA3A87B6615D15A80E8B04E* __this, const RuntimeMethod* method) 
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
// System.Void SetVolume::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetVolume_Awake_m49591866EEC2DB5261C7E0D35BC61D0E22220ABB (SetVolume_t63BBFEA842EFC9E6C86F0115CC7F0F861651981E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void SetVolume::SetAudioVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetVolume_SetAudioVolume_mFECDE43303FE0E67008C5EB88B774F6A29825336 (SetVolume_t63BBFEA842EFC9E6C86F0115CC7F0F861651981E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// audioSource.volume = value;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_5;
		float L_1 = ___0_value;
		NullCheck(L_0);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SetVolume::IncreaseVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetVolume_IncreaseVolume_m7E9815B8A8D39DB92A5C961622866A469B3468F2 (SetVolume_t63BBFEA842EFC9E6C86F0115CC7F0F861651981E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float newVolume = audioSource.volume + step;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_5;
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_0, NULL);
		float L_2 = __this->___step_4;
		V_0 = ((float)il2cpp_codegen_add(L_1, L_2));
		// audioSource.volume = newVolume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___audioSource_5;
		float L_4 = V_0;
		NullCheck(L_3);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void SetVolume::DecreaseVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetVolume_DecreaseVolume_m6206BD4A8B85CAD5C96F27D3DCB0E4CDBEF9882B (SetVolume_t63BBFEA842EFC9E6C86F0115CC7F0F861651981E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float newVolume = audioSource.volume - step;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_5;
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_0, NULL);
		float L_2 = __this->___step_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// audioSource.volume = newVolume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___audioSource_5;
		float L_4 = V_0;
		NullCheck(L_3);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void SetVolume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetVolume__ctor_mE0FE41EB374E34DE3EC224319A1A447A6E43E4A7 (SetVolume_t63BBFEA842EFC9E6C86F0115CC7F0F861651981E* __this, const RuntimeMethod* method) 
{
	{
		// public float step = 0.1f;
		__this->___step_4 = (0.100000001f);
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
// System.Void ShowMessageFromList::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowMessageFromList_Start_m947A1E710FD4BF41C7E7E95DFEF8697CE3FC1E60 (ShowMessageFromList_t2DD66CAD456F6C94361B4752CD0077BCEDB40CC5* __this, const RuntimeMethod* method) 
{
	{
		// ShowMessage();
		ShowMessageFromList_ShowMessage_m74056C88434A90186A4ADC873402EC5E3719A1D8(__this, NULL);
		// }
		return;
	}
}
// System.Void ShowMessageFromList::NextMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowMessageFromList_NextMessage_m5BAF61AB1EFF0AEF8B1C96F56BEB782957B515BD (ShowMessageFromList_t2DD66CAD456F6C94361B4752CD0077BCEDB40CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int newIndex = ++index % messages.Count;
		int32_t L_0 = __this->___index_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___index_7 = L_1;
		int32_t L_2 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___messages_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_3, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		// if (newIndex < index)
		int32_t L_5 = __this->___index_7;
		if ((((int32_t)((int32_t)(L_2%L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0031;
		}
	}
	{
		// OnComplete.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = __this->___OnComplete_5;
		NullCheck(L_6);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
		return;
	}

IL_0031:
	{
		// ShowMessage();
		ShowMessageFromList_ShowMessage_m74056C88434A90186A4ADC873402EC5E3719A1D8(__this, NULL);
		// }
		return;
	}
}
// System.Void ShowMessageFromList::PreviousMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowMessageFromList_PreviousMessage_m280F4490D95545304C02CFF88849C6E5712D4454 (ShowMessageFromList_t2DD66CAD456F6C94361B4752CD0077BCEDB40CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// index = --index % messages.Count;
		int32_t L_0 = __this->___index_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		__this->___index_7 = L_1;
		int32_t L_2 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___messages_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_3, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		__this->___index_7 = ((int32_t)(L_2%L_4));
		// ShowMessage();
		ShowMessageFromList_ShowMessage_m74056C88434A90186A4ADC873402EC5E3719A1D8(__this, NULL);
		// }
		return;
	}
}
// System.Void ShowMessageFromList::ShowMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowMessageFromList_ShowMessage_m74056C88434A90186A4ADC873402EC5E3719A1D8 (ShowMessageFromList_t2DD66CAD456F6C94361B4752CD0077BCEDB40CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// messageOutput.text = messages[Mathf.Abs(index)];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___messageOutput_4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___messages_6;
		int32_t L_2 = __this->___index_7;
		int32_t L_3;
		L_3 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(L_2, NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_1, L_3, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void ShowMessageFromList::ShowMessageAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowMessageFromList_ShowMessageAtIndex_m9772736DA230F79164AFECEE42B835CFC447372A (ShowMessageFromList_t2DD66CAD456F6C94361B4752CD0077BCEDB40CC5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// index = value;
		int32_t L_0 = ___0_value;
		__this->___index_7 = L_0;
		// ShowMessage();
		ShowMessageFromList_ShowMessage_m74056C88434A90186A4ADC873402EC5E3719A1D8(__this, NULL);
		// }
		return;
	}
}
// System.Void ShowMessageFromList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowMessageFromList__ctor_m60F383B4757CA16B6CD7A69639096326B280D08D (ShowMessageFromList_t2DD66CAD456F6C94361B4752CD0077BCEDB40CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnComplete = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___OnComplete_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnComplete_5), (void*)L_0);
		// [TextArea] public List<string> messages = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___messages_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messages_6), (void*)L_1);
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
// System.Void SpawnFromList::SpawnAtDropdownIndex(UnityEngine.UI.Dropdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_SpawnAtDropdownIndex_mCA830420615B79F6588E3E1963C1247E37D97347 (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___0_dropdown, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index = Mathf.Clamp(dropdown.value, 0, originalObjects.Count);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = ___0_dropdown;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___originalObjects_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_1, 0, L_3, NULL);
		__this->___index_8 = L_4;
		// Spawn();
		SpawnFromList_Spawn_mCEBE224251A236DC9AB8F5DBB4781F62D46195E0(__this, NULL);
		// }
		return;
	}
}
// System.Void SpawnFromList::SpawnAndReplaceAtDropdownIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_SpawnAndReplaceAtDropdownIndex_mD230AB849413CE65964AE47C24E736BF8EE613BA (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index = Mathf.Clamp(value, 0, originalObjects.Count);
		int32_t L_0 = ___0_value;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___originalObjects_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, 0, L_2, NULL);
		__this->___index_8 = L_3;
		// SpawnAndReplace();
		SpawnFromList_SpawnAndReplace_mDFD10D3616F81147F9764FC8E32F93199EE189BA(__this, NULL);
		// }
		return;
	}
}
// System.Void SpawnFromList::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_Spawn_mCEBE224251A236DC9AB8F5DBB4781F62D46195E0 (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, const RuntimeMethod* method) 
{
	{
		// CreateObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = SpawnFromList_CreateObject_m3EEAAACDA77AC85C023D53FCBC08126FAD7D68E4(__this, NULL);
		// }
		return;
	}
}
// System.Void SpawnFromList::SpawnAndReplace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_SpawnAndReplace_mDFD10D3616F81147F9764FC8E32F93199EE189BA (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject newObject = CreateObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = SpawnFromList_CreateObject_m3EEAAACDA77AC85C023D53FCBC08126FAD7D68E4(__this, NULL);
		V_0 = L_0;
		// ReplaceObject(newObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		SpawnFromList_ReplaceObject_mA73A2EAEA1D20F1B0B343EF68BCCE5F966453148(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject SpawnFromList::CreateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnFromList_CreateObject_m3EEAAACDA77AC85C023D53FCBC08126FAD7D68E4 (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject prefabToSpawn = originalObjects[index];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___originalObjects_4;
		int32_t L_1 = __this->___index_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// GameObject newObject = Instantiate(prefabToSpawn, spawnPoint.position, spawnPoint.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___spawnPoint_5;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___spawnPoint_5;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_7;
		// if (attachToSpawnPoint)
		bool L_8 = __this->___attachToSpawnPoint_6;
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// newObject.transform.SetParent(spawnPoint);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___spawnPoint_5;
		NullCheck(L_10);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_10, L_11, NULL);
	}

IL_0046:
	{
		// return newObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		return L_12;
	}
}
// System.Void SpawnFromList::ReplaceObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_ReplaceObject_mA73A2EAEA1D20F1B0B343EF68BCCE5F966453148 (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_newObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentObject_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Destroy(currentObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___currentObject_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0018:
	{
		// currentObject = newObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_newObject;
		__this->___currentObject_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void SpawnFromList::SpawnRandom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_SpawnRandom_m39212B34B19504DA79B27B6340296888247EC47F (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index = Random.Range(0, originalObjects.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___originalObjects_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_1, NULL);
		__this->___index_8 = L_2;
		// Spawn();
		SpawnFromList_Spawn_mCEBE224251A236DC9AB8F5DBB4781F62D46195E0(__this, NULL);
		// }
		return;
	}
}
// System.Void SpawnFromList::SpawnAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_SpawnAtIndex_mAB36B932C35471157785D87BC47556D9A4B20016 (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// index = value;
		int32_t L_0 = ___0_value;
		__this->___index_8 = L_0;
		// Spawn();
		SpawnFromList_Spawn_mCEBE224251A236DC9AB8F5DBB4781F62D46195E0(__this, NULL);
		// }
		return;
	}
}
// System.Void SpawnFromList::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList_OnValidate_mA9FB39200FD9AF0B1D493C545962E73B5EF37ECD (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!spawnPoint)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___spawnPoint_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// spawnPoint = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___spawnPoint_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnPoint_5), (void*)L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void SpawnFromList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromList__ctor_m2B9AD524ACB13E9FB096A814C907829BCA3171C7 (SpawnFromList_t72117FB4CF352E430C126011CAAA59FFACE0728E* __this, const RuntimeMethod* method) 
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
// System.Void SpawnObject::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObject_Spawn_mAC628BDE8346468212C9C1822735239ACDE2AA13 (SpawnObject_tFA316A4796D54E7B4AA8F864CF81C88603D82CCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(originalObject, spawnPosition.position, spawnPosition.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___originalObject_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___spawnPosition_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___spawnPosition_5;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SpawnObject::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObject_OnValidate_m5361226A78851B18EC5299912A76240B5D52736F (SpawnObject_tFA316A4796D54E7B4AA8F864CF81C88603D82CCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!spawnPosition)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___spawnPosition_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// spawnPosition = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___spawnPosition_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnPosition_5), (void*)L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void SpawnObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObject__ctor_m2C74585803C93147FECE6831A3793F0BCDB6A29C (SpawnObject_tFA316A4796D54E7B4AA8F864CF81C88603D82CCF* __this, const RuntimeMethod* method) 
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
// System.Void StickToObject::AlignWithSurface(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StickToObject_AlignWithSurface_mEE9320286D297B2721F3644A2200960A2C93EB56 (StickToObject_tF4A41799318685658F52E4F53329735CA17AFC7E* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ContactPoint contactPoint = collision.GetContact(0);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_1;
		L_1 = Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD(L_0, 0, NULL);
		V_0 = L_1;
		// transform.up = -contactPoint.normal;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_3, NULL);
		NullCheck(L_2);
		Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554(L_2, L_4, NULL);
		// }
		return;
	}
}
// System.Void StickToObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StickToObject__ctor_m992C56B5EC66CC5237311B29341A406896313DDF (StickToObject_tF4A41799318685658F52E4F53329735CA17AFC7E* __this, const RuntimeMethod* method) 
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
// System.Void TeleportPlayer::Teleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPlayer_Teleport_m2060151BFE38C9A37DA7B46E20047BD345AB79F2 (TeleportPlayer_t7A369143DA5DD8DDBB94442E2A16ACC78543123A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(anchor && provider)
		TeleportationAnchor_t5C73F0B7F59911E6F9F98FA9156ECBC6E9DD9085* L_0 = __this->___anchor_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* L_2 = __this->___provider_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// TeleportRequest request = CreateRequest();
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_4;
		L_4 = TeleportPlayer_CreateRequest_mE17C45CA9F93CD403E84F5DB97F555B33B7DA6E2(__this, NULL);
		V_0 = L_4;
		// provider.QueueTeleportRequest(request);
		TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* L_5 = __this->___provider_5;
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE >::Invoke(5 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::QueueTeleportRequest(UnityEngine.XR.Interaction.Toolkit.TeleportRequest) */, L_5, L_6);
	}

IL_002e:
	{
		// }
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.TeleportRequest TeleportPlayer::CreateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE TeleportPlayer_CreateRequest_mE17C45CA9F93CD403E84F5DB97F555B33B7DA6E2 (TeleportPlayer_t7A369143DA5DD8DDBB94442E2A16ACC78543123A* __this, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Transform anchorTransform = anchor.teleportAnchorTransform;
		TeleportationAnchor_t5C73F0B7F59911E6F9F98FA9156ECBC6E9DD9085* L_0 = __this->___anchor_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = TeleportationAnchor_get_teleportAnchorTransform_m0711868C6E4463287017D36942E8A5C03122A435_inline(L_0, NULL);
		V_0 = L_1;
		// TeleportRequest request = new TeleportRequest()
		// {
		//     requestTime = Time.time,
		//     matchOrientation = anchor.matchOrientation,
		// 
		//     destinationPosition = anchorTransform.position,
		//     destinationRotation = anchorTransform.rotation
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE));
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		(&V_1)->___requestTime_2 = L_2;
		TeleportationAnchor_t5C73F0B7F59911E6F9F98FA9156ECBC6E9DD9085* L_3 = __this->___anchor_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BaseTeleportationInteractable_get_matchOrientation_mB4CE35CEB0A0206457993CB28A618F300E4BC03D_inline(L_3, NULL);
		(&V_1)->___matchOrientation_3 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		(&V_1)->___destinationPosition_0 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		(&V_1)->___destinationRotation_1 = L_8;
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_9 = V_1;
		// return request;
		return L_9;
	}
}
// System.Void TeleportPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPlayer__ctor_m5B8B88F1D6034771D51BE03E1296DC19941882DC (TeleportPlayer_t7A369143DA5DD8DDBB94442E2A16ACC78543123A* __this, const RuntimeMethod* method) 
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
// System.Void ToggleInterface::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleInterface_Awake_m2F1C356A6C3E63537F0783D3364706F85971B902 (ToggleInterface_tE052745A8F1E6F4F5655E77ED2530F47021C6FB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___canvas_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void ToggleInterface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleInterface_Start_mF5D59151A8C0B36E588CDCF46E6EEC65A3043561 (ToggleInterface_tE052745A8F1E6F4F5655E77ED2530F47021C6FB1* __this, const RuntimeMethod* method) 
{
	{
		// canvas.enabled = enableOnStart;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_5;
		bool L_1 = __this->___enableOnStart_4;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ToggleInterface::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleInterface_Toggle_mEC8C46FFB9C0CD8958C027CFDE322303C63A42C8 (ToggleInterface_tE052745A8F1E6F4F5655E77ED2530F47021C6FB1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool isEnabled = !canvas.enabled;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// canvas.enabled = isEnabled;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___canvas_5;
		bool L_3 = V_0;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ToggleInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleInterface__ctor_mCF056E34E1AA2985EB7B9AF0DB1D0DD8D58FDBDC (ToggleInterface_tE052745A8F1E6F4F5655E77ED2530F47021C6FB1* __this, const RuntimeMethod* method) 
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
// System.Void ToggleLight::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleLight_Awake_m324C91E5DB88E3BADCB0B80110FFED257345ABE8 (ToggleLight_tEB0DBED8FF45F484B5C0FE5705A9A92B2CF1B5E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentLight = GetComponent<Light>();
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		__this->___currentLight_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLight_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void ToggleLight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleLight_Start_m5D0133C2145460C1788DF8821C7742749B3C805D (ToggleLight_tEB0DBED8FF45F484B5C0FE5705A9A92B2CF1B5E6* __this, const RuntimeMethod* method) 
{
	{
		// currentLight.enabled = isOn;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___currentLight_5;
		bool L_1 = __this->___isOn_4;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ToggleLight::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleLight_TurnOn_mD9237A9ECBA0E813E24B5F7180656E7D35024BC5 (ToggleLight_tEB0DBED8FF45F484B5C0FE5705A9A92B2CF1B5E6* __this, const RuntimeMethod* method) 
{
	{
		// isOn = true;
		__this->___isOn_4 = (bool)1;
		// currentLight.enabled = isOn;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___currentLight_5;
		bool L_1 = __this->___isOn_4;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ToggleLight::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleLight_TurnOff_mE0A39EF5CBFD36D87017C4A31E83309BE6AF9F42 (ToggleLight_tEB0DBED8FF45F484B5C0FE5705A9A92B2CF1B5E6* __this, const RuntimeMethod* method) 
{
	{
		// isOn = false;
		__this->___isOn_4 = (bool)0;
		// currentLight.enabled = isOn;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___currentLight_5;
		bool L_1 = __this->___isOn_4;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ToggleLight::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleLight_Flip_m2DC890E36F7CEE23C673D542659581DE44E84334 (ToggleLight_tEB0DBED8FF45F484B5C0FE5705A9A92B2CF1B5E6* __this, const RuntimeMethod* method) 
{
	{
		// isOn = !isOn;
		bool L_0 = __this->___isOn_4;
		__this->___isOn_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// currentLight.enabled = isOn;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = __this->___currentLight_5;
		bool L_2 = __this->___isOn_4;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ToggleLight::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleLight_OnValidate_m3E7C2010768C02E646F4B008AB25E6EF9AFEB995 (ToggleLight_tEB0DBED8FF45F484B5C0FE5705A9A92B2CF1B5E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentLight)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___currentLight_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// currentLight.enabled = isOn;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = __this->___currentLight_5;
		bool L_3 = __this->___isOn_4;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void ToggleLight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleLight__ctor_mBCBFF4D74AB4A7AB5509DEBC9D851A0FD4484E12 (ToggleLight_tEB0DBED8FF45F484B5C0FE5705A9A92B2CF1B5E6* __this, const RuntimeMethod* method) 
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
// System.Void ToggleParticle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleParticle_Awake_mEA82220811D3CD62F5F0F1080FC66EE9978009F1 (ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentParticleSystem = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0;
		L_0 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___currentParticleSystem_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentParticleSystem_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ToggleParticle::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleParticle_Play_m0E822FA5CB1327602758EBF352267EE14E1B5FCF (ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA* __this, const RuntimeMethod* method) 
{
	{
		// currentParticleSystem.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___currentParticleSystem_4;
		NullCheck(L_0);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_0, NULL);
		// }
		return;
	}
}
// System.Void ToggleParticle::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleParticle_Stop_m164E498DF457C9D3CA311875DE091B2FB1AF493B (ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA* __this, const RuntimeMethod* method) 
{
	{
		// currentParticleSystem.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___currentParticleSystem_4;
		NullCheck(L_0);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_0, NULL);
		// }
		return;
	}
}
// System.Void ToggleParticle::PlayWithExclusivity(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleParticle_PlayWithExclusivity_mEEF1933F02B778D4562D2F1EC08D1FAC0D05F777 (ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_owner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(currentOwner == null)
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___currentOwner_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// currentOwner = this;
		__this->___currentOwner_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentOwner_5), (void*)__this);
		// Play();
		ToggleParticle_Play_m0E822FA5CB1327602758EBF352267EE14E1B5FCF(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void ToggleParticle::StopWithExclusivity(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleParticle_StopWithExclusivity_mA62C5C2ACE7FDDD94B7E09CD0AA21591E87C5F06 (ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_owner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(currentOwner == this)
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___currentOwner_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// currentOwner = null;
		__this->___currentOwner_5 = (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentOwner_5), (void*)(MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL);
		// Stop();
		ToggleParticle_Stop_m164E498DF457C9D3CA311875DE091B2FB1AF493B(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void ToggleParticle::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleParticle_OnValidate_m741B2B3D81775ACFE0B9D5456944811FE1534590 (ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(currentParticleSystem)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___currentParticleSystem_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// ParticleSystem.MainModule main = currentParticleSystem.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___currentParticleSystem_4;
		NullCheck(L_2);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_3;
		L_3 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_2, NULL);
		V_0 = L_3;
		// main.playOnAwake = false;
		MainModule_set_playOnAwake_mC86DBF96156C8783FAC2AD1628529F354FB1C6D8((&V_0), (bool)0, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void ToggleParticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleParticle__ctor_mDF26E388C9F7CF97985A5A900F152BF06F0DAC2D (ToggleParticle_tFE56AEC32E14D2D853220E2A5E84D41D4C3F51DA* __this, const RuntimeMethod* method) 
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
// System.Void ToggleRay::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRay_Awake_m8F56EC74189B80AA4AF0441A6B28667F6BBC7299 (ToggleRay_t56666DCAC4C4A9F240455653584F1AFB8FD21BC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rayInteractor = GetComponent<XRRayInteractor>();
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0;
		L_0 = Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4(__this, Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4_RuntimeMethod_var);
		__this->___rayInteractor_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rayInteractor_6), (void*)L_0);
		// SwitchInteractors(false);
		ToggleRay_SwitchInteractors_m7AB1689DA7D618F3624E9513578CB6C590AE16BD(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ToggleRay::ActivateRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRay_ActivateRay_m6886C9B7551FF5D0CB6B413D72B4436B2887D38C (ToggleRay_t56666DCAC4C4A9F240455653584F1AFB8FD21BC2* __this, const RuntimeMethod* method) 
{
	{
		// if (!TouchingObject() || forceToggle)
		bool L_0;
		L_0 = ToggleRay_TouchingObject_mEB2BF58C4F209C3320AE33C7549BD5E456B0D629(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___forceToggle_4;
		if (!L_1)
		{
			goto IL_0017;
		}
	}

IL_0010:
	{
		// SwitchInteractors(true);
		ToggleRay_SwitchInteractors_m7AB1689DA7D618F3624E9513578CB6C590AE16BD(__this, (bool)1, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void ToggleRay::DeactivateRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRay_DeactivateRay_m9E3B9150394C59F4E99876AAF4802DA525913305 (ToggleRay_t56666DCAC4C4A9F240455653584F1AFB8FD21BC2* __this, const RuntimeMethod* method) 
{
	{
		// if (isSwitched)
		bool L_0 = __this->___isSwitched_7;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// SwitchInteractors(false);
		ToggleRay_SwitchInteractors_m7AB1689DA7D618F3624E9513578CB6C590AE16BD(__this, (bool)0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Boolean ToggleRay::TouchingObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToggleRay_TouchingObject_mEB2BF58C4F209C3320AE33C7549BD5E456B0D629 (ToggleRay_t56666DCAC4C4A9F240455653584F1AFB8FD21BC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* V_0 = NULL;
	{
		// List<IXRInteractable> targets = new List<IXRInteractable>();
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_0 = (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*)il2cpp_codegen_object_new(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F(L_0, List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var);
		V_0 = L_0;
		// directInteractor.GetValidTargets(targets);
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_1 = __this->___directInteractor_5;
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_2 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker1< List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* >::Invoke(51 /* System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::GetValidTargets(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>) */, L_1, L_2);
		// return (targets.Count > 0);
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_inline(L_3, List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_RuntimeMethod_var);
		return (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void ToggleRay::SwitchInteractors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRay_SwitchInteractors_m7AB1689DA7D618F3624E9513578CB6C590AE16BD (ToggleRay_t56666DCAC4C4A9F240455653584F1AFB8FD21BC2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// isSwitched = value;
		bool L_0 = ___0_value;
		__this->___isSwitched_7 = L_0;
		// rayInteractor.enabled = value;
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_1 = __this->___rayInteractor_6;
		bool L_2 = ___0_value;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, L_2, NULL);
		// directInteractor.enabled = !value;
		XRDirectInteractor_t1901BC018A818AE3059663EDCC68EDFFE1A8925B* L_3 = __this->___directInteractor_5;
		bool L_4 = ___0_value;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void ToggleRay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRay__ctor_m015E90A172A22A8D11CE0E7144D96E234D4FDE2A (ToggleRay_t56666DCAC4C4A9F240455653584F1AFB8FD21BC2* __this, const RuntimeMethod* method) 
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
// System.Void ToggleVisibility::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleVisibility_Awake_m71E8CBCAA0F915D549BDB84EDA716027FEEE8E77 (ToggleVisibility_tB5D5A3B8249D279CE6AE6676D469B6FB335D34CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___currentRenderer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRenderer_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ToggleVisibility::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleVisibility_Toggle_m4619024B7E8887AF4109D68BB2DC0138294DD7EA (ToggleVisibility_tB5D5A3B8249D279CE6AE6676D469B6FB335D34CF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool isEnabled = !currentRenderer.enabled;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___currentRenderer_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// currentRenderer.enabled = isEnabled;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->___currentRenderer_4;
		bool L_3 = V_0;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ToggleVisibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleVisibility__ctor_mE4E932DEA46AC21B69B1024C244E229629352F34 (ToggleVisibility_tB5D5A3B8249D279CE6AE6676D469B6FB335D34CF* __this, const RuntimeMethod* method) 
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
// System.Void TranslateObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateObject_Start_m32927B3A9F22E801F5D1CFF5A0423DDCE58AA96E (TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0* __this, const RuntimeMethod* method) 
{
	{
		// startPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___startPos_4 = L_1;
		// startRot = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		__this->___startRot_5 = L_3;
		// }
		return;
	}
}
// System.Void TranslateObject::TranslateX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateObject_TranslateX_mF247733110C9B531E5B192748854917A247EFA65 (TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0* __this, float ___0_amount, const RuntimeMethod* method) 
{
	{
		// transform.position += transform.right * amount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_3, NULL);
		float L_5 = ___0_amount;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Void TranslateObject::TranslateY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateObject_TranslateY_m3CFE51CC467FCA9D01A0C8E1B4C688E3661BF325 (TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0* __this, float ___0_amount, const RuntimeMethod* method) 
{
	{
		// transform.position += transform.up * amount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_3, NULL);
		float L_5 = ___0_amount;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Void TranslateObject::TranslateZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateObject_TranslateZ_m8013E15B6B10E5F4D98321608C862496668B4176 (TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0* __this, float ___0_amount, const RuntimeMethod* method) 
{
	{
		// transform.position += transform.forward * amount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		float L_5 = ___0_amount;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Void TranslateObject::SetLocalXPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateObject_SetLocalXPosition_mDE396E3D1274A3B9E0531D93CA93AE883EA0F693 (TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0* __this, float ___0_newPosition, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = new Vector3(newPosition, transform.localPosition.y, transform.localPosition.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = ___0_newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		float L_4 = L_3.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_1, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void TranslateObject::SetLocalYPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateObject_SetLocalYPosition_m33CAA531B9EF8CF16EBE89C3BB24BDF7CC24F944 (TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0* __this, float ___0_newPosition, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = new Vector3(transform.localPosition.x, newPosition, transform.localPosition.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = ___0_newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_3, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void TranslateObject::SetLocalZPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateObject_SetLocalZPosition_m8F98437BF7084A1DBB0EAB5D397F5AB4A73C862C (TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0* __this, float ___0_newPosition, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = new Vector3(transform.localPosition.x, transform.localPosition.y, newPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		float L_6 = L_5.___y_3;
		float L_7 = ___0_newPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_3, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void TranslateObject::ResetToStartingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateObject_ResetToStartingPosition_m8726E0C091631DD0ED6F18B5B4591355BB8EEA7C (TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0* __this, const RuntimeMethod* method) 
{
	{
		// transform.SetPositionAndRotation(startPos, startRot);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___startPos_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___startRot_5;
		NullCheck(L_0);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TranslateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateObject__ctor_mCCFE7E1E640BBFD118104CB665F5130A2F56FF32 (TranslateObject_t06EFB12E75B80C4E1D34EB62593A59117A3E33B0* __this, const RuntimeMethod* method) 
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
// System.Void VibrateController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrateController_Awake_m965AD709BB2815E52254594365B98CDFAE57D2B7 (VibrateController_t0B6AA2FB712411E0534E2B3E82B679C04159C999* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRController_t928E104C899E51FDE12C0A8AC68874587C46C28F_m125A78A2B11A8DC4E549B5275CFECD06A2B5B287_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent<XRController>();
		XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* L_0;
		L_0 = Component_GetComponent_TisXRController_t928E104C899E51FDE12C0A8AC68874587C46C28F_m125A78A2B11A8DC4E549B5275CFECD06A2B5B287(__this, Component_GetComponent_TisXRController_t928E104C899E51FDE12C0A8AC68874587C46C28F_m125A78A2B11A8DC4E549B5275CFECD06A2B5B287_RuntimeMethod_var);
		__this->___controller_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void VibrateController::Vibrate(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrateController_Vibrate_mD8FF0F0733644144A0CA02E4410C3E20BFA9C241 (VibrateController_t0B6AA2FB712411E0534E2B3E82B679C04159C999* __this, float ___0_amplitude, float ___1_duration, const RuntimeMethod* method) 
{
	{
		// controller.SendHapticImpulse(amplitude, duration);
		XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* L_0 = __this->___controller_6;
		float L_1 = ___0_amplitude;
		float L_2 = ___1_duration;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void VibrateController::VibrateWeak(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrateController_VibrateWeak_m8E0CEBCC2F9FE8FA0657C4CF94F4C46934391CBB (VibrateController_t0B6AA2FB712411E0534E2B3E82B679C04159C999* __this, float ___0_duration, const RuntimeMethod* method) 
{
	{
		// controller.SendHapticImpulse(weakVibrate, duration);
		XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* L_0 = __this->___controller_6;
		float L_1 = __this->___weakVibrate_5;
		float L_2 = ___0_duration;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void VibrateController::VibrateStrong(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrateController_VibrateStrong_m15CA61CE06243EFAE42C854B1EDEC4090F6D3364 (VibrateController_t0B6AA2FB712411E0534E2B3E82B679C04159C999* __this, float ___0_duration, const RuntimeMethod* method) 
{
	{
		// controller.SendHapticImpulse(strongVibrate, duration);
		XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* L_0 = __this->___controller_6;
		float L_1 = __this->___strongVibrate_4;
		float L_2 = ___0_duration;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, float, float >::Invoke(15 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void VibrateController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrateController__ctor_m2BC124AF574C2DC46D380C2191E9A1E81356AABD (VibrateController_t0B6AA2FB712411E0534E2B3E82B679C04159C999* __this, const RuntimeMethod* method) 
{
	{
		// public float strongVibrate = 0.75f;
		__this->___strongVibrate_4 = (0.75f);
		// public float weakVibrate = 0.25f;
		__this->___weakVibrate_5 = (0.25f);
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
// System.Void OnButtonPress::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnButtonPress_Awake_mF1EB4A4A6038E058DCB2EC03E965AA1DBD5392E0 (OnButtonPress_t651453381FEBCE7C5A8FCC4119CDAECC6312C946* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnButtonPress_Pressed_mEC23E35145372BAB3E6656D8CBCC3148D78C45AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnButtonPress_Released_mC91A52436B519FE5C4FD018547333C5C4A80DB83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// action.started += Pressed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___action_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_1 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_1, __this, (intptr_t)((void*)OnButtonPress_Pressed_mEC23E35145372BAB3E6656D8CBCC3148D78C45AC_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_0, L_1, NULL);
		// action.canceled += Released;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = __this->___action_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)OnButtonPress_Released_mC91A52436B519FE5C4FD018547333C5C4A80DB83_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void OnButtonPress::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnButtonPress_OnDestroy_m8E7032823BACBF74071767249612B77A5252AA41 (OnButtonPress_t651453381FEBCE7C5A8FCC4119CDAECC6312C946* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnButtonPress_Pressed_mEC23E35145372BAB3E6656D8CBCC3148D78C45AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnButtonPress_Released_mC91A52436B519FE5C4FD018547333C5C4A80DB83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// action.started -= Pressed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___action_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_1 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_1, __this, (intptr_t)((void*)OnButtonPress_Pressed_mEC23E35145372BAB3E6656D8CBCC3148D78C45AC_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_0, L_1, NULL);
		// action.canceled -= Released;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = __this->___action_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)OnButtonPress_Released_mC91A52436B519FE5C4FD018547333C5C4A80DB83_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void OnButtonPress::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnButtonPress_OnEnable_mD7AAA4E95ACC643948920DA6851CF841392FFCB1 (OnButtonPress_t651453381FEBCE7C5A8FCC4119CDAECC6312C946* __this, const RuntimeMethod* method) 
{
	{
		// action.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___action_4;
		NullCheck(L_0);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_0, NULL);
		// }
		return;
	}
}
// System.Void OnButtonPress::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnButtonPress_OnDisable_mCFAE890BD3795A46B7522988F8D07E3E3B45E892 (OnButtonPress_t651453381FEBCE7C5A8FCC4119CDAECC6312C946* __this, const RuntimeMethod* method) 
{
	{
		// action.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___action_4;
		NullCheck(L_0);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_0, NULL);
		// }
		return;
	}
}
// System.Void OnButtonPress::Pressed(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnButtonPress_Pressed_mEC23E35145372BAB3E6656D8CBCC3148D78C45AC (OnButtonPress_t651453381FEBCE7C5A8FCC4119CDAECC6312C946* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	{
		// OnPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnPress_5;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void OnButtonPress::Released(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnButtonPress_Released_mC91A52436B519FE5C4FD018547333C5C4A80DB83 (OnButtonPress_t651453381FEBCE7C5A8FCC4119CDAECC6312C946* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	{
		// OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnRelease_6;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void OnButtonPress::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnButtonPress__ctor_mE8866AA42FCF98C3479955EC6E2854A3A2CE3BDE (OnButtonPress_t651453381FEBCE7C5A8FCC4119CDAECC6312C946* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnPress = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___OnPress_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnPress_5), (void*)L_0);
		// public UnityEvent OnRelease = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___OnRelease_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnRelease_6), (void*)L_1);
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
// System.Void OnCollision::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollision_OnCollisionEnter_m62353B6C2BD943EB4931BBA39AAF6417FF8A3C61 (OnCollision_t3D87229F569874E3CAFB379073C9BAC60C9E68F6* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m9FD8C788E4BB7FA83567C4E1ABA07D56773E3B25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnEnter.Invoke(collision);
		CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB* L_0 = __this->___OnEnter_4;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___0_collision;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m9FD8C788E4BB7FA83567C4E1ABA07D56773E3B25(L_0, L_1, UnityEvent_1_Invoke_m9FD8C788E4BB7FA83567C4E1ABA07D56773E3B25_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void OnCollision::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollision_OnCollisionExit_mEF213786500FA8192C5991AABA97C224DAD818E6 (OnCollision_t3D87229F569874E3CAFB379073C9BAC60C9E68F6* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m9FD8C788E4BB7FA83567C4E1ABA07D56773E3B25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnExit.Invoke(collision);
		CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB* L_0 = __this->___OnExit_5;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___0_collision;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m9FD8C788E4BB7FA83567C4E1ABA07D56773E3B25(L_0, L_1, UnityEvent_1_Invoke_m9FD8C788E4BB7FA83567C4E1ABA07D56773E3B25_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void OnCollision::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollision_OnValidate_mAD196D9B644A0305884A682D936A83C74EA05FF5 (OnCollision_t3D87229F569874E3CAFB379073C9BAC60C9E68F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m18C7B725568F747CF4748CAAC4A8BC9036A4F329_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_0 = NULL;
	{
		// if (TryGetComponent(out Collider collider))
		bool L_0;
		L_0 = Component_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m18C7B725568F747CF4748CAAC4A8BC9036A4F329(__this, (&V_0), Component_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m18C7B725568F747CF4748CAAC4A8BC9036A4F329_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// collider.isTrigger = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = V_0;
		NullCheck(L_1);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_1, (bool)0, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void OnCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollision__ctor_m4418700048B3C6B00C4A4CB00AB03757B817928A (OnCollision_t3D87229F569874E3CAFB379073C9BAC60C9E68F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CollisionEvent OnEnter = new CollisionEvent();
		CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB* L_0 = (CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB*)il2cpp_codegen_object_new(CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CollisionEvent__ctor_m428BE57B67BEBD790D856E05C153795287FF49D5(L_0, NULL);
		__this->___OnEnter_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnEnter_4), (void*)L_0);
		// public CollisionEvent OnExit = new CollisionEvent();
		CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB* L_1 = (CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB*)il2cpp_codegen_object_new(CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CollisionEvent__ctor_m428BE57B67BEBD790D856E05C153795287FF49D5(L_1, NULL);
		__this->___OnExit_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnExit_5), (void*)L_1);
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
// System.Void OnCollision/CollisionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionEvent__ctor_m428BE57B67BEBD790D856E05C153795287FF49D5 (CollisionEvent_t7D983A13E2F02A1BA4AEBCB2351FF3469BCC2EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m43205529F1412DD4AF9B2CA9A71E20F39AC9C3DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m43205529F1412DD4AF9B2CA9A71E20F39AC9C3DD(__this, UnityEvent_1__ctor_m43205529F1412DD4AF9B2CA9A71E20F39AC9C3DD_RuntimeMethod_var);
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
// System.Void OnJoystickMove::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoystickMove_Awake_m4A3888AC4D874D0455ED3B330FC6819E13977262 (OnJoystickMove_tDCE4895D5B4A114B88E11EAFB293656CA5C42474* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnJoystickMove_OnValueChange_mC5C20F56B5A47CF0CE7324CFB844176E6E159F4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// action.performed += OnValueChange;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___action_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_1 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_1, __this, (intptr_t)((void*)OnJoystickMove_OnValueChange_mC5C20F56B5A47CF0CE7324CFB844176E6E159F4D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_0, L_1, NULL);
		// action.canceled += OnValueChange;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = __this->___action_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)OnJoystickMove_OnValueChange_mC5C20F56B5A47CF0CE7324CFB844176E6E159F4D_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void OnJoystickMove::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoystickMove_OnDestroy_m4C1FD5BE84280635F2DE5A0FC90A0A3D76067C5D (OnJoystickMove_tDCE4895D5B4A114B88E11EAFB293656CA5C42474* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnJoystickMove_OnValueChange_mC5C20F56B5A47CF0CE7324CFB844176E6E159F4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// action.performed -= OnValueChange;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___action_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_1 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_1, __this, (intptr_t)((void*)OnJoystickMove_OnValueChange_mC5C20F56B5A47CF0CE7324CFB844176E6E159F4D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_0, L_1, NULL);
		// action.canceled -= OnValueChange;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = __this->___action_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)OnJoystickMove_OnValueChange_mC5C20F56B5A47CF0CE7324CFB844176E6E159F4D_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void OnJoystickMove::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoystickMove_OnEnable_mF2DA3B06C6BB4C005F394939EDDED53B8DB5725D (OnJoystickMove_tDCE4895D5B4A114B88E11EAFB293656CA5C42474* __this, const RuntimeMethod* method) 
{
	{
		// action.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___action_4;
		NullCheck(L_0);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_0, NULL);
		// }
		return;
	}
}
// System.Void OnJoystickMove::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoystickMove_OnDisable_mED2812ED0AD47F7F2E9F8509A62D4097C38EF457 (OnJoystickMove_tDCE4895D5B4A114B88E11EAFB293656CA5C42474* __this, const RuntimeMethod* method) 
{
	{
		// action.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___action_4;
		NullCheck(L_0);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_0, NULL);
		// }
		return;
	}
}
// System.Void OnJoystickMove::OnValueChange(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoystickMove_OnValueChange_mC5C20F56B5A47CF0CE7324CFB844176E6E159F4D (OnJoystickMove_tDCE4895D5B4A114B88E11EAFB293656CA5C42474* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 value = context.ReadValue<Vector2>();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830((&___0_context), CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_RuntimeMethod_var);
		V_0 = L_0;
		// OnXValueChange.Invoke(value.x);
		ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26* L_1 = __this->___OnXValueChange_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		float L_3 = L_2.___x_0;
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_3, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// OnYValueChange.Invoke(value.y);
		ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26* L_4 = __this->___OnYValueChange_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___y_1;
		NullCheck(L_4);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_4, L_6, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void OnJoystickMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoystickMove__ctor_mD945E817C240731CB73E343838AE00617A440ECC (OnJoystickMove_tDCE4895D5B4A114B88E11EAFB293656CA5C42474* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueChangeEvent OnXValueChange = new ValueChangeEvent();
		ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26* L_0 = (ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26*)il2cpp_codegen_object_new(ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueChangeEvent__ctor_m81283B84192903BA20CADC2EED0565AB41C0B0CB(L_0, NULL);
		__this->___OnXValueChange_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnXValueChange_5), (void*)L_0);
		// public ValueChangeEvent OnYValueChange = new ValueChangeEvent();
		ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26* L_1 = (ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26*)il2cpp_codegen_object_new(ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ValueChangeEvent__ctor_m81283B84192903BA20CADC2EED0565AB41C0B0CB(L_1, NULL);
		__this->___OnYValueChange_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnYValueChange_6), (void*)L_1);
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
// System.Void OnJoystickMove/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m81283B84192903BA20CADC2EED0565AB41C0B0CB (ValueChangeEvent_t1E2CE6E4C50120A16D83AC0818FDC7931901BC26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void OnPull::BeginCheck(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPull_BeginCheck_m4175026C7AE37F410CD67AFF7BDDD3F6A73A7D3E (OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// pullInteractor = interactor;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = ___0_interactor;
		__this->___pullInteractor_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pullInteractor_7), (void*)L_0);
		// startPosition = pullInteractor.transform.position;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1 = __this->___pullInteractor_7;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___startPosition_8 = L_3;
		// }
		return;
	}
}
// System.Void OnPull::EndCheck(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPull_EndCheck_m63AD49D626546BB40860D076A37F937F7574CB06 (OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// pullInteractor = null;
		__this->___pullInteractor_7 = (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pullInteractor_7), (void*)(XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL);
		// startPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___startPosition_8 = L_0;
		// OnEnd.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___OnEnd_6;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// }
		return;
	}
}
// System.Void OnPull::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPull_Update_m4DFDFE88A849C099E332DF45A71193D382C966FA (OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229* __this, const RuntimeMethod* method) 
{
	{
		// CheckPull();
		OnPull_CheckPull_m4C75D6524CB0C10DD4A64A110622CA0245242405(__this, NULL);
		// }
		return;
	}
}
// System.Void OnPull::CheckPull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPull_CheckPull_m4C75D6524CB0C10DD4A64A110622CA0245242405 (OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (pullInteractor)
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___pullInteractor_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// bool thresholdCheck = CheckThreshold();
		bool L_2;
		L_2 = OnPull_CheckThreshold_mE5653CDDA3292B164527030F2D0FF6096DA8835B(__this, NULL);
		V_0 = L_2;
		// if (thresholdCheck != withinThreshold)
		bool L_3 = V_0;
		bool L_4 = __this->___withinThreshold_9;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0043;
		}
	}
	{
		// withinThreshold = thresholdCheck;
		bool L_5 = V_0;
		__this->___withinThreshold_9 = L_5;
		// if (withinThreshold)
		bool L_6 = __this->___withinThreshold_9;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// OnBegin.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7 = __this->___OnBegin_5;
		NullCheck(L_7);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_7, NULL);
		return;
	}

IL_0038:
	{
		// OnEnd.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = __this->___OnEnd_6;
		NullCheck(L_8);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_8, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Boolean OnPull::CheckThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnPull_CheckThreshold_mE5653CDDA3292B164527030F2D0FF6096DA8835B (OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 handDifference = pullInteractor.transform.position - startPosition;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___pullInteractor_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___startPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// float distanceSqr = handDifference.magnitude;
		float L_5;
		L_5 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		// return (distanceSqr > threshold);
		float L_6 = __this->___threshold_4;
		return (bool)((((float)L_5) > ((float)L_6))? 1 : 0);
	}
}
// System.Void OnPull::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPull_OnDrawGizmosSelected_m39EC86A657775168FC1F762CBC598251C85C4BE1 (OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.DrawWireSphere(transform.position, threshold);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___threshold_4;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void OnPull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPull__ctor_m97BDB217F270634150EC0866D89762F9C4F1028F (OnPull_t20A2A72AE203F82D076CD872205801E7D0D0F229* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float threshold = 1.0f;
		__this->___threshold_4 = (1.0f);
		// public UnityEvent OnBegin = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___OnBegin_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnBegin_5), (void*)L_0);
		// public UnityEvent OnEnd = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___OnEnd_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnEnd_6), (void*)L_1);
		// private Vector3 startPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___startPosition_8 = L_2;
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
// System.Void OnSceneLoad::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSceneLoad_Awake_m67689E720057ECC58F05F8841B4B52009B4BE64F (OnSceneLoad_t177EF5314CA12E1B72B882EB15A111D7A9A30BD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSceneLoad_PlayEvent_m5A1EDD0EF0357B2DC739D500BCAA257C28FAE3F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += PlayEvent;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)OnSceneLoad_PlayEvent_m5A1EDD0EF0357B2DC739D500BCAA257C28FAE3F3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_0, NULL);
		// }
		return;
	}
}
// System.Void OnSceneLoad::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSceneLoad_OnDestroy_m64B2500E53783479867FB91EA978FE2E31FE674C (OnSceneLoad_t177EF5314CA12E1B72B882EB15A111D7A9A30BD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSceneLoad_PlayEvent_m5A1EDD0EF0357B2DC739D500BCAA257C28FAE3F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= PlayEvent;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)OnSceneLoad_PlayEvent_m5A1EDD0EF0357B2DC739D500BCAA257C28FAE3F3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m72A7C2A1B8EF1C21A208A9A015375577768B3978(L_0, NULL);
		// }
		return;
	}
}
// System.Void OnSceneLoad::PlayEvent(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSceneLoad_PlayEvent_m5A1EDD0EF0357B2DC739D500BCAA257C28FAE3F3 (OnSceneLoad_t177EF5314CA12E1B72B882EB15A111D7A9A30BD2* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) 
{
	{
		// OnLoad.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnLoad_4;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void OnSceneLoad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSceneLoad__ctor_m6F653448F486BFF12A49C28EA545CD6F819D7C00 (OnSceneLoad_t177EF5314CA12E1B72B882EB15A111D7A9A30BD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnLoad = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___OnLoad_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnLoad_4), (void*)L_0);
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
// System.Void OnTilt::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTilt_Update_mA6E6B7B06DB19ABD60B10DFB9796B967EBDFEE6D (OnTilt_t0BBC6BF26D4EE49C994CF142396AE9C76BA3EF23* __this, const RuntimeMethod* method) 
{
	{
		// CheckOrientation();
		OnTilt_CheckOrientation_m89F56736AEC5F668CACE0C2287AF7C6290C22530(__this, NULL);
		// }
		return;
	}
}
// System.Void OnTilt::CheckOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTilt_CheckOrientation_m89F56736AEC5F668CACE0C2287AF7C6290C22530 (OnTilt_t0BBC6BF26D4EE49C994CF142396AE9C76BA3EF23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		// float similarity = Vector3.Dot(-transform.up, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_4;
		L_4 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// similarity = Mathf.InverseLerp(-1, 1, similarity);
		float L_5 = V_0;
		float L_6;
		L_6 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline((-1.0f), (1.0f), L_5, NULL);
		V_0 = L_6;
		// bool thresholdCheck = similarity >= threshold;
		float L_7 = V_0;
		float L_8 = __this->___threshold_4;
		V_1 = (bool)((((int32_t)((!(((float)L_7) >= ((float)L_8)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (withinThreshold != thresholdCheck)
		bool L_9 = __this->___withinThreshold_7;
		bool L_10 = V_1;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_006a;
		}
	}
	{
		// withinThreshold = thresholdCheck;
		bool L_11 = V_1;
		__this->___withinThreshold_7 = L_11;
		// if (withinThreshold)
		bool L_12 = __this->___withinThreshold_7;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		// OnBegin.Invoke(this);
		TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223* L_13 = __this->___OnBegin_5;
		NullCheck(L_13);
		UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1(L_13, __this, UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1_RuntimeMethod_var);
		return;
	}

IL_005e:
	{
		// OnEnd.Invoke(this);
		TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223* L_14 = __this->___OnEnd_6;
		NullCheck(L_14);
		UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1(L_14, __this, UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1_RuntimeMethod_var);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void OnTilt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTilt__ctor_mCE90590373095C9344E3DEDF192CC99F24CC79E6 (OnTilt_t0BBC6BF26D4EE49C994CF142396AE9C76BA3EF23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TiltEvent OnBegin = new TiltEvent();
		TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223* L_0 = (TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223*)il2cpp_codegen_object_new(TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TiltEvent__ctor_mD07C22013245370E6AE486FBC8536025A56493F8(L_0, NULL);
		__this->___OnBegin_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnBegin_5), (void*)L_0);
		// public TiltEvent OnEnd = new TiltEvent();
		TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223* L_1 = (TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223*)il2cpp_codegen_object_new(TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TiltEvent__ctor_mD07C22013245370E6AE486FBC8536025A56493F8(L_1, NULL);
		__this->___OnEnd_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnEnd_6), (void*)L_1);
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
// System.Void OnTilt/TiltEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltEvent__ctor_mD07C22013245370E6AE486FBC8536025A56493F8 (TiltEvent_tE7CA2C072A0C8305A34D01A5ABD23E9F7573B223* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDD85D3BD5692606F4DA08AEF04F83FD152CEA678_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDD85D3BD5692606F4DA08AEF04F83FD152CEA678(__this, UnityEvent_1__ctor_mDD85D3BD5692606F4DA08AEF04F83FD152CEA678_RuntimeMethod_var);
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
// System.Void OnTimedInterval::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTimedInterval_Start_m45AFE55CC4E286FA30606F84557079F16B35EF21 (OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(IntervalRoutine());
		RuntimeObject* L_0;
		L_0 = OnTimedInterval_IntervalRoutine_m53C4319DFCC398662538160284872A1483072625(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator OnTimedInterval::IntervalRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTimedInterval_IntervalRoutine_m53C4319DFCC398662538160284872A1483072625 (OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E* L_0 = (U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E*)il2cpp_codegen_object_new(U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CIntervalRoutineU3Ed__4__ctor_m1DC3EEBE3646702DC9E11E82465B60D377E9DE28(L_0, 0, NULL);
		U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void OnTimedInterval::PlayEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTimedInterval_PlayEvent_mA6AB605C28CD8B2BE2A61DD905C8AF6C4099D2E3 (OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* __this, const RuntimeMethod* method) 
{
	{
		// OnIntervalElapsed.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnIntervalElapsed_6;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void OnTimedInterval::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTimedInterval__ctor_m59DEC95B221973DC732571E87D0DE3FC2AB56904 (OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float maxInterval = 1.0f;
		__this->___maxInterval_5 = (1.0f);
		// public UnityEvent OnIntervalElapsed = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___OnIntervalElapsed_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnIntervalElapsed_6), (void*)L_0);
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
// System.Void OnTimedInterval/<IntervalRoutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntervalRoutineU3Ed__4__ctor_m1DC3EEBE3646702DC9E11E82465B60D377E9DE28 (U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void OnTimedInterval/<IntervalRoutine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntervalRoutineU3Ed__4_System_IDisposable_Dispose_m253E6956B2D78DF11A2A3E56138724B429272B90 (U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OnTimedInterval/<IntervalRoutine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIntervalRoutineU3Ed__4_MoveNext_m41010DFCBBB56A2DF58B6F1A7783A14C73007014 (U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float interval = Random.Range(minInterval, maxInterval);
		OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___minInterval_4;
		OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___maxInterval_5;
		float L_8;
		L_8 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_5, L_7, NULL);
		V_2 = L_8;
		// yield return new WaitForSeconds(interval);
		float L_9 = V_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayEvent();
		OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* L_11 = V_1;
		NullCheck(L_11);
		OnTimedInterval_PlayEvent_mA6AB605C28CD8B2BE2A61DD905C8AF6C4099D2E3(L_11, NULL);
		// StartCoroutine(IntervalRoutine());
		OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* L_12 = V_1;
		OnTimedInterval_tB9083D892D6C8ED72DAAAED27CD8EE68547F96EA* L_13 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = OnTimedInterval_IntervalRoutine_m53C4319DFCC398662538160284872A1483072625(L_13, NULL);
		NullCheck(L_12);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_15;
		L_15 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_12, L_14, NULL);
		// }
		return (bool)0;
	}
}
// System.Object OnTimedInterval/<IntervalRoutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntervalRoutineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD092D57B0731BA8C493D927A3BB4FC449432706 (U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OnTimedInterval/<IntervalRoutine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntervalRoutineU3Ed__4_System_Collections_IEnumerator_Reset_m4702AD573AD86829528B673CD8297445BB7B8CF3 (U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIntervalRoutineU3Ed__4_System_Collections_IEnumerator_Reset_m4702AD573AD86829528B673CD8297445BB7B8CF3_RuntimeMethod_var)));
	}
}
// System.Object OnTimedInterval/<IntervalRoutine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntervalRoutineU3Ed__4_System_Collections_IEnumerator_get_Current_m5172978422BF9D92E0D4A089092D9CAEC0E2B67A (U3CIntervalRoutineU3Ed__4_tA3570B952856DA279856407F8AD1DC976C452F5E* __this, const RuntimeMethod* method) 
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
// System.Void OnTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrigger_OnTriggerEnter_mE52BBA53CC7BBABA08CD1AFF916363C2E865CDC1 (OnTrigger_tEBBA6B78D0052F76B7320FF71C7130F99DF85A41* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m288CD64C3923EC3CCAD5D49C59DBE59B75F48AED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* G_B3_0 = NULL;
	TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* G_B2_0 = NULL;
	{
		// if (CanTrigger(other.gameObject))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2;
		L_2 = OnTrigger_CanTrigger_m1031C213B74BE38AEE2697FDCF19FF5E93D1B227(__this, L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// OnEnter?.Invoke(other);
		TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* L_3 = __this->___OnEnter_5;
		TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___0_other;
		NullCheck(G_B3_0);
		UnityEvent_1_Invoke_m288CD64C3923EC3CCAD5D49C59DBE59B75F48AED(G_B3_0, L_5, UnityEvent_1_Invoke_m288CD64C3923EC3CCAD5D49C59DBE59B75F48AED_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void OnTrigger::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrigger_OnTriggerExit_m9C925D06665DE422BA0EAE4B741A211EC15070F2 (OnTrigger_tEBBA6B78D0052F76B7320FF71C7130F99DF85A41* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m288CD64C3923EC3CCAD5D49C59DBE59B75F48AED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* G_B3_0 = NULL;
	TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* G_B2_0 = NULL;
	{
		// if (CanTrigger(other.gameObject))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2;
		L_2 = OnTrigger_CanTrigger_m1031C213B74BE38AEE2697FDCF19FF5E93D1B227(__this, L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// OnExit?.Invoke(other);
		TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* L_3 = __this->___OnExit_6;
		TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___0_other;
		NullCheck(G_B3_0);
		UnityEvent_1_Invoke_m288CD64C3923EC3CCAD5D49C59DBE59B75F48AED(G_B3_0, L_5, UnityEvent_1_Invoke_m288CD64C3923EC3CCAD5D49C59DBE59B75F48AED_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Boolean OnTrigger::CanTrigger(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnTrigger_CanTrigger_m1031C213B74BE38AEE2697FDCF19FF5E93D1B227 (OnTrigger_tEBBA6B78D0052F76B7320FF71C7130F99DF85A41* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_otherGameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(requiredTag != string.Empty)
		String_t* L_0 = __this->___requiredTag_4;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return otherGameObject.CompareTag(requiredTag);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_otherGameObject;
		String_t* L_4 = __this->___requiredTag_4;
		NullCheck(L_3);
		bool L_5;
		L_5 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_3, L_4, NULL);
		return L_5;
	}

IL_001f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void OnTrigger::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrigger_OnValidate_m619A4B178F54AAE6EE8AF39B9D17E17D91F3E2C2 (OnTrigger_tEBBA6B78D0052F76B7320FF71C7130F99DF85A41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m18C7B725568F747CF4748CAAC4A8BC9036A4F329_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_0 = NULL;
	{
		// if (TryGetComponent(out Collider collider))
		bool L_0;
		L_0 = Component_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m18C7B725568F747CF4748CAAC4A8BC9036A4F329(__this, (&V_0), Component_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m18C7B725568F747CF4748CAAC4A8BC9036A4F329_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// collider.isTrigger = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = V_0;
		NullCheck(L_1);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_1, (bool)1, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void OnTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrigger__ctor_m96D9CA949766842381CF23D810455F6373CA0D59 (OnTrigger_tEBBA6B78D0052F76B7320FF71C7130F99DF85A41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string requiredTag = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___requiredTag_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___requiredTag_4), (void*)L_0);
		// public TriggerEvent OnEnter = new TriggerEvent();
		TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* L_1 = (TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747*)il2cpp_codegen_object_new(TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TriggerEvent__ctor_mEF780A5D525AB70222BEB826D916818A336304B1(L_1, NULL);
		__this->___OnEnter_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnEnter_5), (void*)L_1);
		// public TriggerEvent OnExit = new TriggerEvent();
		TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* L_2 = (TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747*)il2cpp_codegen_object_new(TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TriggerEvent__ctor_mEF780A5D525AB70222BEB826D916818A336304B1(L_2, NULL);
		__this->___OnExit_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnExit_6), (void*)L_2);
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
// System.Void OnTrigger/TriggerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent__ctor_mEF780A5D525AB70222BEB826D916818A336304B1 (TriggerEvent_tB92A1BCF4D251345FE0E2C7F2A48896008514747* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC69A7D7C9B31012B413D4CBEAF78BD36498160C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC69A7D7C9B31012B413D4CBEAF78BD36498160C2(__this, UnityEvent_1__ctor_mC69A7D7C9B31012B413D4CBEAF78BD36498160C2_RuntimeMethod_var);
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
// System.Void OnVelocity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVelocity_Awake_mBE5D94EEFF5CA69F8327AE32823359C8FC4CEEAD (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidBody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidBody_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidBody_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void OnVelocity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVelocity_Update_mD26C7CCB257C6DC9C97B5C86F2EB2CF862BC7E32 (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, const RuntimeMethod* method) 
{
	{
		// CheckVelocity();
		OnVelocity_CheckVelocity_m50031CA2EC0203632351BF6505A8C743981B8936(__this, NULL);
		// }
		return;
	}
}
// System.Void OnVelocity::CheckVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVelocity_CheckVelocity_m50031CA2EC0203632351BF6505A8C743981B8936 (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float speed = rigidBody.velocity.magnitude;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigidBody_8;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_1 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		V_0 = L_2;
		// hasBegun = HasVelocityBegun(speed);
		float L_3 = V_0;
		bool L_4;
		L_4 = OnVelocity_HasVelocityBegun_m01A68C69997A59CE68120FC408122867E5DB6CDC(__this, L_3, NULL);
		__this->___hasBegun_9 = L_4;
		// if (HasVelcoityEnded(speed))
		float L_5 = V_0;
		bool L_6;
		L_6 = OnVelocity_HasVelcoityEnded_m30DAF5DAB9F0251471D7B5A0D2AD1B43B2C8288D(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		// Reset();
		OnVelocity_Reset_m604A80B30797E37D40BFA9CEC2BC543B22DB8988(__this, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Boolean OnVelocity::HasVelocityBegun(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnVelocity_HasVelocityBegun_m01A68C69997A59CE68120FC408122867E5DB6CDC (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, float ___0_speed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (hasBegun)
		bool L_0 = __this->___hasBegun_9;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// bool beginCheck = speed > beginThreshold;
		float L_1 = ___0_speed;
		float L_2 = __this->___beginThreshold_4;
		// if (beginCheck)
		int32_t L_3 = ((((float)L_1) > ((float)L_2))? 1 : 0);
		G_B3_0 = L_3;
		if (!L_3)
		{
			G_B4_0 = L_3;
			goto IL_0022;
		}
	}
	{
		// OnBegin.Invoke(this);
		VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF* L_4 = __this->___OnBegin_6;
		NullCheck(L_4);
		UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1(L_4, __this, UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
	}

IL_0022:
	{
		// return beginCheck;
		return (bool)G_B4_0;
	}
}
// System.Boolean OnVelocity::HasVelcoityEnded(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnVelocity_HasVelcoityEnded_m30DAF5DAB9F0251471D7B5A0D2AD1B43B2C8288D (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, float ___0_speed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (!hasBegun)
		bool L_0 = __this->___hasBegun_9;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// bool endCheck = speed < endThreshold;
		float L_1 = ___0_speed;
		float L_2 = __this->___endThreshold_5;
		// if (endCheck)
		int32_t L_3 = ((((float)L_1) < ((float)L_2))? 1 : 0);
		G_B3_0 = L_3;
		if (!L_3)
		{
			G_B4_0 = L_3;
			goto IL_0022;
		}
	}
	{
		// OnEnd.Invoke(this);
		VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF* L_4 = __this->___OnEnd_7;
		NullCheck(L_4);
		UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1(L_4, __this, UnityEvent_1_Invoke_m4EABBA861A45671202F6A5EBDFBD47F7C974CEC1_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
	}

IL_0022:
	{
		// return endCheck;
		return (bool)G_B4_0;
	}
}
// System.Void OnVelocity::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVelocity_Reset_m604A80B30797E37D40BFA9CEC2BC543B22DB8988 (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, const RuntimeMethod* method) 
{
	{
		// hasBegun = false;
		__this->___hasBegun_9 = (bool)0;
		// }
		return;
	}
}
// System.Void OnVelocity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVelocity__ctor_m0E0B4A32641C273C346F7E1A1CCCE80B800C9C94 (OnVelocity_tBBC812B6BC7EEEBDCD86768CE09DDE6F254F05FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float beginThreshold = 1.25f;
		__this->___beginThreshold_4 = (1.25f);
		// public float endThreshold = 0.25f;
		__this->___endThreshold_5 = (0.25f);
		// public VelocityEvent OnBegin = new VelocityEvent();
		VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF* L_0 = (VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF*)il2cpp_codegen_object_new(VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VelocityEvent__ctor_m9C1F8EF88F6268DAD57C8D5D2C5E22444E272340(L_0, NULL);
		__this->___OnBegin_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnBegin_6), (void*)L_0);
		// public VelocityEvent OnEnd = new VelocityEvent();
		VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF* L_1 = (VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF*)il2cpp_codegen_object_new(VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VelocityEvent__ctor_m9C1F8EF88F6268DAD57C8D5D2C5E22444E272340(L_1, NULL);
		__this->___OnEnd_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnEnd_7), (void*)L_1);
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
// System.Void OnVelocity/VelocityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityEvent__ctor_m9C1F8EF88F6268DAD57C8D5D2C5E22444E272340 (VelocityEvent_t4C4EE35B178340BBE790FA2A3EDC7752AD6F42DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDD85D3BD5692606F4DA08AEF04F83FD152CEA678_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDD85D3BD5692606F4DA08AEF04F83FD152CEA678(__this, UnityEvent_1__ctor_mDD85D3BD5692606F4DA08AEF04F83FD152CEA678_RuntimeMethod_var);
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
// System.Void XRButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_OnEnable_mDE840EC8738E401247FDB8FD05A54B219CB6B717 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRButton_EndPress_m2B7C95F0865CA262D6FE898723F56DC837D864FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRButton_StartPress_mDFBACB020CB54BC7DA5344FD3D154BC1F88DBDB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// hoverEntered.AddListener(StartPress);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0;
		L_0 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(__this, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_1 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_1, __this, (intptr_t)((void*)XRButton_StartPress_mDFBACB020CB54BC7DA5344FD3D154BC1F88DBDB7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_0, L_1, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// hoverExited.AddListener(EndPress);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_2;
		L_2 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(__this, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_3 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_3, __this, (intptr_t)((void*)XRButton_EndPress_m2B7C95F0865CA262D6FE898723F56DC837D864FF_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_2, L_3, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_OnDisable_mFA13FE3D8D49DFAFBF4153B4181716A47FB6EEE5 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRButton_EndPress_m2B7C95F0865CA262D6FE898723F56DC837D864FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRButton_StartPress_mDFBACB020CB54BC7DA5344FD3D154BC1F88DBDB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// hoverEntered.RemoveListener(StartPress);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0;
		L_0 = XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline(__this, NULL);
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_1 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_1, __this, (intptr_t)((void*)XRButton_StartPress_mDFBACB020CB54BC7DA5344FD3D154BC1F88DBDB7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33(L_0, L_1, UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		// hoverExited.RemoveListener(EndPress);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_2;
		L_2 = XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline(__this, NULL);
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_3 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_3, __this, (intptr_t)((void*)XRButton_EndPress_m2B7C95F0865CA262D6FE898723F56DC837D864FF_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78(L_2, L_3, UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRButton::StartPress(UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_StartPress_mDFBACB020CB54BC7DA5344FD3D154BC1F88DBDB7 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* ___0_eventArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hoverInteractor = eventArgs.interactorObject;
		HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E* L_0 = ___0_eventArgs;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HoverEnterEventArgs_get_interactorObject_m9735CAB1FCE64F6DD65498458C582463A0FB5D19(L_0, NULL);
		__this->___hoverInteractor_52 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hoverInteractor_52), (void*)L_1);
		// hoverHeight = GetLocalYPosition(hoverInteractor.transform.position);
		RuntimeObject* L_2 = __this->___hoverInteractor_52;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = XRButton_GetLocalYPosition_mC710DC12BBF966B2CFE45FDF65709A2E1EA75FF7(__this, L_4, NULL);
		__this->___hoverHeight_53 = L_5;
		// startHeight = buttonTransform.localPosition.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___buttonTransform_46;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_6, NULL);
		float L_8 = L_7.___y_3;
		__this->___startHeight_54 = L_8;
		// }
		return;
	}
}
// System.Void XRButton::EndPress(UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_EndPress_m2B7C95F0865CA262D6FE898723F56DC837D864FF (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6* ___0_eventArgs, const RuntimeMethod* method) 
{
	{
		// hoverInteractor = null;
		__this->___hoverInteractor_52 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hoverInteractor_52), (void*)(RuntimeObject*)NULL);
		// hoverHeight = 0.0f;
		__this->___hoverHeight_53 = (0.0f);
		// startHeight = 0.0f;
		__this->___startHeight_54 = (0.0f);
		// ApplyHeight(yMax);
		float L_0 = __this->___yMax_51;
		XRButton_ApplyHeight_m3E8A3EDB8ECCD946AAEAA9BF550D8CB27892C97B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void XRButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_Start_m0A38BC409FE44AEBDE9E1D9BBE8940E26C8ECAA1 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) 
{
	{
		// SetMinMax();
		XRButton_SetMinMax_mD5F3EE07D187011F922A2AD987889041CC03AF29(__this, NULL);
		// }
		return;
	}
}
// System.Void XRButton::SetMinMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_SetMinMax_mD5F3EE07D187011F922A2AD987889041CC03AF29 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) 
{
	{
		// yMin = buttonTransform.localPosition.y - pressDistance;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___buttonTransform_46;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		float L_2 = L_1.___y_3;
		float L_3 = __this->___pressDistance_47;
		__this->___yMin_50 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// yMax = buttonTransform.localPosition.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___buttonTransform_46;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		float L_6 = L_5.___y_3;
		__this->___yMax_51 = L_6;
		// }
		return;
	}
}
// System.Void XRButton::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_ProcessInteractable_m46A47E5C7E6FB751C5621D67FD63D9F0131D517B (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if(updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_0 = ___0_updatePhase;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// if (isHovered)
		bool L_1;
		L_1 = XRBaseInteractable_get_isHovered_m365DB744ECBAB53AD4A489F6EBA5360DF993FB1E(__this, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// float height = FindButtonHeight();
		float L_2;
		L_2 = XRButton_FindButtonHeight_mB9A6E02F6C6F093FA946B13AF7E66F028800B326(__this, NULL);
		V_0 = L_2;
		// ApplyHeight(height);
		float L_3 = V_0;
		XRButton_ApplyHeight_m3E8A3EDB8ECCD946AAEAA9BF550D8CB27892C97B(__this, L_3, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Single XRButton::FindButtonHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRButton_FindButtonHeight_mB9A6E02F6C6F093FA946B13AF7E66F028800B326 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float newHoverHeight = GetLocalYPosition(hoverInteractor.transform.position);
		RuntimeObject* L_0 = __this->___hoverInteractor_52;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3;
		L_3 = XRButton_GetLocalYPosition_mC710DC12BBF966B2CFE45FDF65709A2E1EA75FF7(__this, L_2, NULL);
		V_0 = L_3;
		// float hoverDifference = hoverHeight - newHoverHeight;
		float L_4 = __this->___hoverHeight_53;
		float L_5 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// return startHeight - hoverDifference;
		float L_6 = __this->___startHeight_54;
		float L_7 = V_1;
		return ((float)il2cpp_codegen_subtract(L_6, L_7));
	}
}
// System.Single XRButton::GetLocalYPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRButton_GetLocalYPosition_mC710DC12BBF966B2CFE45FDF65709A2E1EA75FF7 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) 
{
	{
		// Vector3 localPosition = transform.InverseTransformPoint(position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_position;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_1, NULL);
		// return localPosition.y;
		float L_3 = L_2.___y_3;
		return L_3;
	}
}
// System.Void XRButton::ApplyHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_ApplyHeight_m3E8A3EDB8ECCD946AAEAA9BF550D8CB27892C97B (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, float ___0_position, const RuntimeMethod* method) 
{
	{
		// SetButtonPosition(position);
		float L_0 = ___0_position;
		XRButton_SetButtonPosition_m5D602A5FB1BFBE8F96FB58820DC7BF1104EB6239(__this, L_0, NULL);
		// CheckPress();
		XRButton_CheckPress_mBFA9E05F531D7B2E03B79972211E9870675631FD(__this, NULL);
		// }
		return;
	}
}
// System.Void XRButton::SetButtonPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_SetButtonPosition_m5D602A5FB1BFBE8F96FB58820DC7BF1104EB6239 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, float ___0_position, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 newPosition = buttonTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___buttonTransform_46;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		V_0 = L_1;
		// newPosition.y = Mathf.Clamp(position, yMin, yMax);
		float L_2 = ___0_position;
		float L_3 = __this->___yMin_50;
		float L_4 = __this->___yMax_51;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, L_3, L_4, NULL);
		(&V_0)->___y_3 = L_5;
		// buttonTransform.localPosition = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___buttonTransform_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void XRButton::CheckPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton_CheckPress_mBFA9E05F531D7B2E03B79972211E9870675631FD (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool inPosition = InPosition();
		bool L_0;
		L_0 = XRButton_InPosition_m7013258CE80BC37121BDD1D58AE359375A4C5C67(__this, NULL);
		V_0 = L_0;
		// if(inPosition != previousPress)
		bool L_1 = V_0;
		bool L_2 = __this->___previousPress_55;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0031;
		}
	}
	{
		// previousPress = inPosition;
		bool L_3 = V_0;
		__this->___previousPress_55 = L_3;
		// if(inPosition)
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// OnPress.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = __this->___OnPress_48;
		NullCheck(L_5);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_5, NULL);
		return;
	}

IL_0026:
	{
		// OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = __this->___OnRelease_49;
		NullCheck(L_6);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Boolean XRButton::InPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRButton_InPosition_m7013258CE80BC37121BDD1D58AE359375A4C5C67 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float threshold = yMin + (pressDistance * 0.5f);
		float L_0 = __this->___yMin_50;
		float L_1 = __this->___pressDistance_47;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, (0.5f)))));
		// return buttonTransform.localPosition.y < threshold;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___buttonTransform_46;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		float L_4 = L_3.___y_3;
		float L_5 = V_0;
		return (bool)((((float)L_4) < ((float)L_5))? 1 : 0);
	}
}
// System.Boolean XRButton::IsSelectableBy(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRButton_IsSelectableBy_mD0D4B942999D51F7483BD22AFF5A910231BF0B69 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, RuntimeObject* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void XRButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRButton__ctor_m37BFB5B1DD55026357320EDE4758AC33EB6900D5 (XRButton_t1938DFED47393F1EF252576DFD379C6028D70566* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float pressDistance = 0.1f;
		__this->___pressDistance_47 = (0.100000001f);
		// public UnityEvent OnPress = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___OnPress_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnPress_48), (void*)L_0);
		// public UnityEvent OnRelease = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___OnRelease_49 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnRelease_49), (void*)L_1);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// UnityEngine.Vector2 XRJoystick::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRJoystick_get_Value_mF49BC0A4B9416B7AC7BE7FB06A64C804151311D6 (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Value { get; private set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CValueU3Ek__BackingField_51;
		return L_0;
	}
}
// System.Void XRJoystick::set_Value(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_set_Value_m694DB106F38D758A8EF0EFE73C5E106F96763EF1 (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 Value { get; private set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_51 = L_0;
		return;
	}
}
// System.Void XRJoystick::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_OnEnable_m5540C76AA3146DBAA602AF648B1FDBBC1330466F (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRJoystick_EndGrab_m0ADBE5602A8BD5BDA9DACB0C856E3BC1A3EBA806_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRJoystick_StartGrab_mF705C804CC2D567AED6D74E3AA14A54FEFB90D8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRJoystick_StartGrab_mF705C804CC2D567AED6D74E3AA14A54FEFB90D8A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRJoystick_EndGrab_m0ADBE5602A8BD5BDA9DACB0C856E3BC1A3EBA806_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRJoystick::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_OnDisable_m3313120331EECCB0A099F001F6576563C079B6D9 (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRJoystick_EndGrab_m0ADBE5602A8BD5BDA9DACB0C856E3BC1A3EBA806_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRJoystick_StartGrab_mF705C804CC2D567AED6D74E3AA14A54FEFB90D8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRJoystick_StartGrab_mF705C804CC2D567AED6D74E3AA14A54FEFB90D8A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRJoystick_EndGrab_m0ADBE5602A8BD5BDA9DACB0C856E3BC1A3EBA806_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRJoystick::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_StartGrab_mF705C804CC2D567AED6D74E3AA14A54FEFB90D8A (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_eventArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectInteractor = eventArgs.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___0_eventArgs;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___selectInteractor_52 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectInteractor_52), (void*)L_1);
		// initialPosition = ConvertToLocal(selectInteractor.transform.position);
		RuntimeObject* L_2 = __this->___selectInteractor_52;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = XRJoystick_ConvertToLocal_m386BA88E88756C7F00D5A9CBF2C4DE35289B79EF(__this, L_4, NULL);
		__this->___initialPosition_53 = L_5;
		// }
		return;
	}
}
// System.Void XRJoystick::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_EndGrab_m0ADBE5602A8BD5BDA9DACB0C856E3BC1A3EBA806 (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_eventArgs, const RuntimeMethod* method) 
{
	{
		// selectInteractor = null;
		__this->___selectInteractor_52 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectInteractor_52), (void*)(RuntimeObject*)NULL);
		// ResetRotation();
		XRJoystick_ResetRotation_m49EA4CA91F35B6112ED3EAA5FA1B53E6C43A2E14(__this, NULL);
		// }
		return;
	}
}
// System.Void XRJoystick::ResetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_ResetRotation_m49EA4CA91F35B6112ED3EAA5FA1B53E6C43A2E14 (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, const RuntimeMethod* method) 
{
	{
		// handle.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___handle_48;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_0);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_1, NULL);
		// initialPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___initialPosition_53 = L_2;
		// SetValue(Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		XRJoystick_SetValue_m6D9750078B6D7AEABCF5C7C0D731918FA38F778A(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void XRJoystick::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_ProcessInteractable_m4524C0B9A63D25C2945B63F3B60402BD4E5B8107 (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___0_updatePhase;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (isSelected)
		bool L_1;
		L_1 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_2 = ___0_updatePhase;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		// Vector3 targetPosition = selectInteractor.transform.position;
		RuntimeObject* L_3 = __this->___selectInteractor_52;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_0 = L_5;
		// Vector3 newRotation = FindJoystickRotation(targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = XRJoystick_FindJoystickRotation_m1291A8C5F01AE14F7E0DBCC42DBA0B7960D0C986(__this, L_6, NULL);
		V_1 = L_7;
		// ApplyRotation(newRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		XRJoystick_ApplyRotation_m4D2CE9C538B35E2484937776E5BD300C982A3D9F(__this, L_8, NULL);
		// SetValue(newRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		XRJoystick_SetValue_m6D9750078B6D7AEABCF5C7C0D731918FA38F778A(__this, L_9, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 XRJoystick::FindJoystickRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRJoystick_FindJoystickRotation_m1291A8C5F01AE14F7E0DBCC42DBA0B7960D0C986 (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// Vector3 currentPosition = ConvertToLocal(target);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = XRJoystick_ConvertToLocal_m386BA88E88756C7F00D5A9CBF2C4DE35289B79EF(__this, L_0, NULL);
		// Vector3 positionDifference = currentPosition - initialPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___initialPosition_53;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// positionDifference.y = rateOfChange;
		float L_4 = __this->___rateOfChange_46;
		(&V_0)->___y_3 = L_4;
		// Vector3 finalRotation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_5;
		// if (leverType == JoystickType.FrontBack || leverType == JoystickType.Both)
		int32_t L_6 = __this->___leverType_47;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_7 = __this->___leverType_47;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0053;
		}
	}

IL_0038:
	{
		// float xRotation = GetRotationDifference(positionDifference.y, positionDifference.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___z_4;
		float L_12;
		L_12 = XRJoystick_GetRotationDifference_m86C4DEB768FD73CED0623F31A54BF4BF041EB8CF(__this, L_9, L_11, NULL);
		V_2 = L_12;
		// finalRotation.x = xRotation;
		float L_13 = V_2;
		(&V_1)->___x_2 = L_13;
	}

IL_0053:
	{
		// if (leverType == JoystickType.LeftRight || leverType == JoystickType.Both)
		int32_t L_14 = __this->___leverType_47;
		if ((((int32_t)L_14) == ((int32_t)3)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_15 = __this->___leverType_47;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0080;
		}
	}

IL_0065:
	{
		// float zRotation = GetRotationDifference(positionDifference.y, positionDifference.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = L_18.___x_2;
		float L_20;
		L_20 = XRJoystick_GetRotationDifference_m86C4DEB768FD73CED0623F31A54BF4BF041EB8CF(__this, L_17, L_19, NULL);
		V_3 = L_20;
		// finalRotation.z = zRotation;
		float L_21 = V_3;
		(&V_1)->___z_4 = L_21;
	}

IL_0080:
	{
		// return finalRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		return L_22;
	}
}
// UnityEngine.Vector3 XRJoystick::ConvertToLocal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRJoystick_ConvertToLocal_m386BA88E88756C7F00D5A9CBF2C4DE35289B79EF (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) 
{
	{
		// return transform.InverseTransformPoint(target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_target;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single XRJoystick::GetRotationDifference(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRJoystick_GetRotationDifference_m86C4DEB768FD73CED0623F31A54BF4BF041EB8CF (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, float ___0_yRelative, float ___1_xRelative, const RuntimeMethod* method) 
{
	{
		// float difference = Mathf.Atan2(xRelative, yRelative) * Mathf.Rad2Deg;
		float L_0 = ___1_xRelative;
		float L_1 = ___0_yRelative;
		float L_2;
		L_2 = atan2f(L_0, L_1);
		// difference = Mathf.Clamp(difference, minRotation, maxRotation);
		int32_t L_3 = __this->___minRotation_54;
		int32_t L_4 = __this->___maxRotation_55;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_2, (57.2957802f))), ((float)L_3), ((float)L_4), NULL);
		// return difference;
		return L_5;
	}
}
// System.Void XRJoystick::ApplyRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_ApplyRotation_m4D2CE9C538B35E2484937776E5BD300C982A3D9F (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_newRotation, const RuntimeMethod* method) 
{
	{
		// newRotation.z *= -1;
		float* L_0 = (&(&___0_newRotation)->___z_4);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, (-1.0f)));
		// handle.localRotation = Quaternion.Euler(newRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___handle_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_newRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_4, NULL);
		NullCheck(L_3);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void XRJoystick::SetValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick_SetValue_m6D9750078B6D7AEABCF5C7C0D731918FA38F778A (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = CalculateValue(rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_rotation;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = XRJoystick_CalculateValue_m8BD3229014D250B186BFA507D523B06FF0915F7A(__this, L_0, NULL);
		XRJoystick_set_Value_m694DB106F38D758A8EF0EFE73C5E106F96763EF1_inline(__this, L_1, NULL);
		// OnXValueChange.Invoke(Value.x);
		ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1* L_2 = __this->___OnXValueChange_49;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = XRJoystick_get_Value_mF49BC0A4B9416B7AC7BE7FB06A64C804151311D6_inline(__this, NULL);
		float L_4 = L_3.___x_0;
		NullCheck(L_2);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_2, L_4, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// OnYValueChange.Invoke(Value.y);
		ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1* L_5 = __this->___OnYValueChange_50;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = XRJoystick_get_Value_mF49BC0A4B9416B7AC7BE7FB06A64C804151311D6_inline(__this, NULL);
		float L_7 = L_6.___y_1;
		NullCheck(L_5);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_5, L_7, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Vector2 XRJoystick::CalculateValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRJoystick_CalculateValue_m8BD3229014D250B186BFA507D523B06FF0915F7A (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_rotation, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 newValue = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_0;
		// newValue.x = Normalize(rotation.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_rotation;
		float L_2 = L_1.___z_4;
		float L_3;
		L_3 = XRJoystick_Normalize_m334AD9E307F7892C1422EEF40A54DDD38DA8EBEB(__this, L_2, NULL);
		(&V_0)->___x_0 = L_3;
		// newValue.y = Normalize(rotation.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_rotation;
		float L_5 = L_4.___x_2;
		float L_6;
		L_6 = XRJoystick_Normalize_m334AD9E307F7892C1422EEF40A54DDD38DA8EBEB(__this, L_5, NULL);
		(&V_0)->___y_1 = L_6;
		// return newValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
// System.Single XRJoystick::Normalize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRJoystick_Normalize_m334AD9E307F7892C1422EEF40A54DDD38DA8EBEB (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// value = Mathf.InverseLerp(minRotation, maxRotation, value);
		int32_t L_0 = __this->___minRotation_54;
		int32_t L_1 = __this->___maxRotation_55;
		float L_2 = ___0_value;
		float L_3;
		L_3 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(((float)L_0), ((float)L_1), L_2, NULL);
		___0_value = L_3;
		// value = Mathf.Lerp(-1, 1, value);
		float L_4 = ___0_value;
		float L_5;
		L_5 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((-1.0f), (1.0f), L_4, NULL);
		___0_value = L_5;
		// return value;
		float L_6 = ___0_value;
		return L_6;
	}
}
// System.Void XRJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRJoystick__ctor_mA94FCCDCEAFC850EDE077AD01097FFD99AA6AC00 (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float rateOfChange = 0.1f;
		__this->___rateOfChange_46 = (0.100000001f);
		// public JoystickType leverType = JoystickType.Both;
		__this->___leverType_47 = 1;
		// public ValueChangeEvent OnXValueChange = new ValueChangeEvent();
		ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1* L_0 = (ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1*)il2cpp_codegen_object_new(ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueChangeEvent__ctor_m56B177EA8CA7980B43EC38C48A6C5523BCB08D29(L_0, NULL);
		__this->___OnXValueChange_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnXValueChange_49), (void*)L_0);
		// public ValueChangeEvent OnYValueChange = new ValueChangeEvent();
		ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1* L_1 = (ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1*)il2cpp_codegen_object_new(ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ValueChangeEvent__ctor_m56B177EA8CA7980B43EC38C48A6C5523BCB08D29(L_1, NULL);
		__this->___OnYValueChange_50 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnYValueChange_50), (void*)L_1);
		// public Vector2 Value { get; private set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___U3CValueU3Ek__BackingField_51 = L_2;
		// private Vector3 initialPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___initialPosition_53 = L_3;
		// private readonly int minRotation = -30;
		__this->___minRotation_54 = ((int32_t)-30);
		// private readonly int maxRotation = 30;
		__this->___maxRotation_55 = ((int32_t)30);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Void XRJoystick/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m56B177EA8CA7980B43EC38C48A6C5523BCB08D29 (ValueChangeEvent_t2C90EEAAD501AD9C66DA583A4855906056BDDCE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Single XRKnob::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_Value_m40D6F73992F439850EA85E49448CBFF20399E701 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) 
{
	{
		// public float Value { get; private set; } = 0.0f;
		float L_0 = __this->___U3CValueU3Ek__BackingField_51;
		return L_0;
	}
}
// System.Void XRKnob::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_Value_m408E8821B4F35EE520F4318D4B2951600C340A1C (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Value { get; private set; } = 0.0f;
		float L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_51 = L_0;
		return;
	}
}
// System.Single XRKnob::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_get_Angle_m9BCC3C3132FA6FFAB210D92F1B1B966BE928684A (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) 
{
	{
		// public float Angle { get; private set; } = 0.0f;
		float L_0 = __this->___U3CAngleU3Ek__BackingField_52;
		return L_0;
	}
}
// System.Void XRKnob::set_Angle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_set_Angle_mAF3F22FD68F49D5D0761D36C213874CFC1141757 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Angle { get; private set; } = 0.0f;
		float L_0 = ___0_value;
		__this->___U3CAngleU3Ek__BackingField_52 = L_0;
		return;
	}
}
// System.Void XRKnob::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_Start_mCAECCEE600FF8C2E7092FA9F88E1E230244E5473 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float defaultRotation = Mathf.Lerp(minimum, maximum, defaultValue);
		float L_0 = __this->___minimum_47;
		float L_1 = __this->___maximum_48;
		float L_2 = __this->___defaultValue_49;
		float L_3;
		L_3 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// ApplyRotation(defaultRotation);
		float L_4 = V_0;
		float L_5;
		L_5 = XRKnob_ApplyRotation_m0A30A8D8603403DA2A938BB747816CD34EBA6E34(__this, L_4, NULL);
		// SetValue(defaultRotation);
		float L_6 = V_0;
		XRKnob_SetValue_m17C9FDF03E07A29BAE26495543F4D3EE3DC8B690(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void XRKnob::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnEnable_m46D52187CE2B7CB695768030E28382EE6EA17CE6 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_EndTurn_m30589F5F160CF523BC258814322B71FFD978FB8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_StartTurn_m47E313D03FF7E5FAE048F78D99437A5A02AA924E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartTurn);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRKnob_StartTurn_m47E313D03FF7E5FAE048F78D99437A5A02AA924E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndTurn);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRKnob_EndTurn_m30589F5F160CF523BC258814322B71FFD978FB8F_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRKnob::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_OnDisable_m6D8D1050956A47849B07E549DF1DF14BE2039E7C (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_EndTurn_m30589F5F160CF523BC258814322B71FFD978FB8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRKnob_StartTurn_m47E313D03FF7E5FAE048F78D99437A5A02AA924E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// selectEntered.RemoveListener(StartTurn);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRKnob_StartTurn_m47E313D03FF7E5FAE048F78D99437A5A02AA924E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndTurn);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRKnob_EndTurn_m30589F5F160CF523BC258814322B71FFD978FB8F_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRKnob::StartTurn(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_StartTurn_m47E313D03FF7E5FAE048F78D99437A5A02AA924E (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_eventArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectInteractor = eventArgs.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___0_eventArgs;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___selectInteractor_53 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectInteractor_53), (void*)L_1);
		// selectRotation = selectInteractor.transform.rotation;
		RuntimeObject* L_2 = __this->___selectInteractor_53;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		__this->___selectRotation_54 = L_4;
		// }
		return;
	}
}
// System.Void XRKnob::EndTurn(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_EndTurn_m30589F5F160CF523BC258814322B71FFD978FB8F (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_eventArgs, const RuntimeMethod* method) 
{
	{
		// selectInteractor = null;
		__this->___selectInteractor_53 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectInteractor_53), (void*)(RuntimeObject*)NULL);
		// selectRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___selectRotation_54 = L_0;
		// }
		return;
	}
}
// System.Void XRKnob::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_ProcessInteractable_mAB57EF908C9DBE7F29D7FFDB7C578BE66FC05976 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___0_updatePhase;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___0_updatePhase;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		// if (isSelected)
		bool L_2;
		L_2 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		// Angle = FindRotationValue();
		float L_3;
		L_3 = XRKnob_FindRotationValue_m6AA7A0C6ADD8762DF93DA717BD46578E3B4203F1(__this, NULL);
		XRKnob_set_Angle_mAF3F22FD68F49D5D0761D36C213874CFC1141757_inline(__this, L_3, NULL);
		// float finalRotation = ApplyRotation(Angle);
		float L_4;
		L_4 = XRKnob_get_Angle_m9BCC3C3132FA6FFAB210D92F1B1B966BE928684A_inline(__this, NULL);
		float L_5;
		L_5 = XRKnob_ApplyRotation_m0A30A8D8603403DA2A938BB747816CD34EBA6E34(__this, L_4, NULL);
		V_0 = L_5;
		// SetValue(finalRotation);
		float L_6 = V_0;
		XRKnob_SetValue_m17C9FDF03E07A29BAE26495543F4D3EE3DC8B690(__this, L_6, NULL);
		// selectRotation = selectInteractor.transform.rotation;
		RuntimeObject* L_7 = __this->___selectInteractor_53;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		__this->___selectRotation_54 = L_9;
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single XRKnob::FindRotationValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_FindRotationValue_m6AA7A0C6ADD8762DF93DA717BD46578E3B4203F1 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion rotationDifference = selectInteractor.transform.rotation * Quaternion.Inverse(selectRotation);
		RuntimeObject* L_0 = __this->___selectInteractor_53;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___selectRotation_54;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_2, L_4, NULL);
		// Vector3 rotatedForward = rotationDifference * knobTransform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___knobTransform_46;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_5, L_7, NULL);
		V_0 = L_8;
		// return (Vector3.SignedAngle(knobTransform.forward, rotatedForward, transform.up));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___knobTransform_46;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_12, NULL);
		float L_14;
		L_14 = Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline(L_10, L_11, L_13, NULL);
		return L_14;
	}
}
// System.Single XRKnob::ApplyRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ApplyRotation_m0A30A8D8603403DA2A938BB747816CD34EBA6E34 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_angle, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Quaternion newRotation = Quaternion.AngleAxis(angle, Vector3.up);
		float L_0 = ___0_angle;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_0, L_1, NULL);
		V_0 = L_2;
		// newRotation *= knobTransform.localRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___knobTransform_46;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_3, L_5, NULL);
		V_0 = L_6;
		// Vector3 eulerRotation = newRotation.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		V_1 = L_7;
		// eulerRotation.y = ClampAngle(eulerRotation.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		float L_9 = L_8.___y_3;
		float L_10;
		L_10 = XRKnob_ClampAngle_mCF17BA4970ED5E56B3F10410BFCCD4003391A64D(__this, L_9, NULL);
		(&V_1)->___y_3 = L_10;
		// knobTransform.localEulerAngles = eulerRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___knobTransform_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		NullCheck(L_11);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_11, L_12, NULL);
		// return eulerRotation.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		float L_14 = L_13.___y_3;
		return L_14;
	}
}
// System.Single XRKnob::ClampAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRKnob_ClampAngle_mCF17BA4970ED5E56B3F10410BFCCD4003391A64D (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_angle, const RuntimeMethod* method) 
{
	{
		// if (angle > 180)
		float L_0 = ___0_angle;
		if ((!(((float)L_0) > ((float)(180.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle -= 360;
		float L_1 = ___0_angle;
		___0_angle = ((float)il2cpp_codegen_subtract(L_1, (360.0f)));
	}

IL_0011:
	{
		// return (Mathf.Clamp(angle, minimum, maximum));
		float L_2 = ___0_angle;
		float L_3 = __this->___minimum_47;
		float L_4 = __this->___maximum_48;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Void XRKnob::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob_SetValue_m17C9FDF03E07A29BAE26495543F4D3EE3DC8B690 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = Mathf.InverseLerp(minimum, maximum, rotation);
		float L_0 = __this->___minimum_47;
		float L_1 = __this->___maximum_48;
		float L_2 = ___0_rotation;
		float L_3;
		L_3 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_0, L_1, L_2, NULL);
		XRKnob_set_Value_m408E8821B4F35EE520F4318D4B2951600C340A1C_inline(__this, L_3, NULL);
		// OnValueChange.Invoke(Value);
		ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC* L_4 = __this->___OnValueChange_50;
		float L_5;
		L_5 = XRKnob_get_Value_m40D6F73992F439850EA85E49448CBFF20399E701_inline(__this, NULL);
		NullCheck(L_4);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_4, L_5, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRKnob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRKnob__ctor_mD2FD17267BFD029E6EB163FA49D9B1FD77CF1DC7 (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Range(-180, 0)] public float minimum = -90.0f;
		__this->___minimum_47 = (-90.0f);
		// [Range(0, 180)] public float maximum = 90.0f;
		__this->___maximum_48 = (90.0f);
		// public ValueChangeEvent OnValueChange = new ValueChangeEvent();
		ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC* L_0 = (ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC*)il2cpp_codegen_object_new(ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueChangeEvent__ctor_m1F803B770069A94CF68F98BB0F21F5B98175CBB8(L_0, NULL);
		__this->___OnValueChange_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnValueChange_50), (void*)L_0);
		// private Quaternion selectRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___selectRotation_54 = L_1;
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Void XRKnob/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m1F803B770069A94CF68F98BB0F21F5B98175CBB8 (ValueChangeEvent_t12AA6211275F6CC41B4B9A4AF72C7B6E9CB1C7EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Boolean XRLever::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLever_get_Value_m7E067A17EE3919C5087E826CF62ACFDC8155D19F (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, const RuntimeMethod* method) 
{
	{
		// public bool Value { get; private set; } = false;
		bool L_0 = __this->___U3CValueU3Ek__BackingField_50;
		return L_0;
	}
}
// System.Void XRLever::set_Value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_set_Value_mF72830809FEF43727B9F2F30493D2B92FFD13436 (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Value { get; private set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_50 = L_0;
		return;
	}
}
// System.Void XRLever::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_Start_m127DD499BD4BB605996ADE9577A88579F84EC82C (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, const RuntimeMethod* method) 
{
	{
		// FindSnapDirection(defaultValue);
		bool L_0 = __this->___defaultValue_47;
		XRLever_FindSnapDirection_m7EA820999D1048333ADC6F0CCEC6C1B44394E1CA(__this, L_0, NULL);
		// SetValue(defaultValue);
		bool L_1 = __this->___defaultValue_47;
		XRLever_SetValue_m6332E2665D140EBB2608149EBAD3392048331B4D(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void XRLever::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnEnable_mFD2EC18B44214437CF2595A8D49AE0E8FD28A264 (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_ApplyValue_mB14C33B075A9B44469A0EFC1B327409AA0EE53B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_EndGrab_m25CD10AAD752F660A680A9FB5E742010ACED4A99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_StartGrab_mDD631CB649E741AE3890DDDC013F14A3147424B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRLever_StartGrab_mDD631CB649E741AE3890DDDC013F14A3147424B0_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRLever_EndGrab_m25CD10AAD752F660A680A9FB5E742010ACED4A99_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// selectExited.AddListener(ApplyValue);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_4;
		L_4 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_5 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_5, __this, (intptr_t)((void*)XRLever_ApplyValue_mB14C33B075A9B44469A0EFC1B327409AA0EE53B2_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_4, L_5, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRLever::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_OnDisable_m98BE602CC1DF00CA8B4D10CA277E7DF1839A1223 (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_ApplyValue_mB14C33B075A9B44469A0EFC1B327409AA0EE53B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_EndGrab_m25CD10AAD752F660A680A9FB5E742010ACED4A99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLever_StartGrab_mDD631CB649E741AE3890DDDC013F14A3147424B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRLever_StartGrab_mDD631CB649E741AE3890DDDC013F14A3147424B0_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRLever_EndGrab_m25CD10AAD752F660A680A9FB5E742010ACED4A99_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// selectExited.RemoveListener(ApplyValue);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_4;
		L_4 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_5 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_5, __this, (intptr_t)((void*)XRLever_ApplyValue_mB14C33B075A9B44469A0EFC1B327409AA0EE53B2_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_4, L_5, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRLever::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_StartGrab_mDD631CB649E741AE3890DDDC013F14A3147424B0 (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_eventArgs, const RuntimeMethod* method) 
{
	{
		// selectInteractor = eventArgs.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___0_eventArgs;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___selectInteractor_51 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectInteractor_51), (void*)L_1);
		// }
		return;
	}
}
// System.Void XRLever::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_EndGrab_m25CD10AAD752F660A680A9FB5E742010ACED4A99 (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_eventArgs, const RuntimeMethod* method) 
{
	{
		// selectInteractor = null;
		__this->___selectInteractor_51 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectInteractor_51), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void XRLever::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_ProcessInteractable_m49A0BBA3CB90FBDA81664BFCDD9BD4EE5DB5B4EA (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___0_updatePhase;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_1 = ___0_updatePhase;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// if (isSelected)
		bool L_2;
		L_2 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// Vector3 lookDirection = GetLookDirection();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = XRLever_GetLookDirection_mCCC8405FA2A59C2FFE66075A8FE1FA80298A6F38(__this, NULL);
		V_0 = L_3;
		// handle.forward = transform.TransformDirection(lookDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___handle_46;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_5, L_6, NULL);
		NullCheck(L_4);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_4, L_7, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 XRLever::GetLookDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRLever_GetLookDirection_mCCC8405FA2A59C2FFE66075A8FE1FA80298A6F38 (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = selectInteractor.transform.position - handle.position;
		RuntimeObject* L_0 = __this->___selectInteractor_51;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___handle_46;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// direction = transform.InverseTransformDirection(direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_6, L_7, NULL);
		V_0 = L_8;
		// direction.x = 0;
		(&V_0)->___x_2 = (0.0f);
		// direction.y = Mathf.Clamp(direction.y, 0, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___y_3;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, (0.0f), (1.0f), NULL);
		(&V_0)->___y_3 = L_11;
		// return direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// System.Void XRLever::ApplyValue(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_ApplyValue_mB14C33B075A9B44469A0EFC1B327409AA0EE53B2 (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_eventArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// IXRSelectInteractor interactor = eventArgs.interactorObject;
		SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* L_0 = ___0_eventArgs;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectExitEventArgs_get_interactorObject_m395880E1D46E6008A4AA90836393E4F1E39CAAA3(L_0, NULL);
		V_0 = L_1;
		// bool isOn = InOnPosition(interactor.transform.position);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		bool L_5;
		L_5 = XRLever_InOnPosition_mC5593824D1A3B0DB7FF7B54AE93B750E3EAA8870(__this, L_4, NULL);
		V_1 = L_5;
		// FindSnapDirection(isOn);
		bool L_6 = V_1;
		XRLever_FindSnapDirection_m7EA820999D1048333ADC6F0CCEC6C1B44394E1CA(__this, L_6, NULL);
		// SetValue(isOn);
		bool L_7 = V_1;
		XRLever_SetValue_m6332E2665D140EBB2608149EBAD3392048331B4D(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Boolean XRLever::InOnPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLever_InOnPosition_mC5593824D1A3B0DB7FF7B54AE93B750E3EAA8870 (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_interactorPosition, const RuntimeMethod* method) 
{
	{
		// interactorPosition = transform.InverseTransformPoint(interactorPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_interactorPosition;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_1, NULL);
		___0_interactorPosition = L_2;
		// return (interactorPosition.z > 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_interactorPosition;
		float L_4 = L_3.___z_4;
		return (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Void XRLever::FindSnapDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_FindSnapDirection_m7EA820999D1048333ADC6F0CCEC6C1B44394E1CA (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, bool ___0_isOn, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_1 = NULL;
	{
		// handle.forward = isOn ? transform.forward : -transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___handle_46;
		bool L_1 = ___0_isOn;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_001b:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		NullCheck(G_B3_1);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void XRLever::SetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever_SetValue_m6332E2665D140EBB2608149EBAD3392048331B4D (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, bool ___0_isOn, const RuntimeMethod* method) 
{
	{
		// Value = isOn;
		bool L_0 = ___0_isOn;
		XRLever_set_Value_mF72830809FEF43727B9F2F30493D2B92FFD13436_inline(__this, L_0, NULL);
		// if (Value)
		bool L_1;
		L_1 = XRLever_get_Value_m7E067A17EE3919C5087E826CF62ACFDC8155D19F_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// OnLeverActivate.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___OnLeverActivate_48;
		NullCheck(L_2);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_2, NULL);
		return;
	}

IL_001b:
	{
		// OnLeverDeactivate.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = __this->___OnLeverDeactivate_49;
		NullCheck(L_3);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_3, NULL);
		// }
		return;
	}
}
// System.Void XRLever::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLever__ctor_m281785E41608807BDF9AAF886E6791B475055A8C (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent OnLeverActivate = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___OnLeverActivate_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnLeverActivate_48), (void*)L_0);
		// public UnityEvent OnLeverDeactivate = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___OnLeverDeactivate_49 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnLeverDeactivate_49), (void*)L_1);
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Single XRSlider::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSlider_get_Value_m41B41463BAABF34AC6E72384EB290E0A693C587C (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, const RuntimeMethod* method) 
{
	{
		// public float Value { get; private set; } = 0.0f;
		float L_0 = __this->___U3CValueU3Ek__BackingField_51;
		return L_0;
	}
}
// System.Void XRSlider::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_set_Value_m0EE6FB6914CF04ABFF2852FA781F5B536E9C3A0E (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Value { get; private set; } = 0.0f;
		float L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_51 = L_0;
		return;
	}
}
// System.Void XRSlider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_Start_mF21713EE62F83B04C62966B4DB6FE864B81C559A (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, const RuntimeMethod* method) 
{
	{
		// Value = defaultValue;
		float L_0 = __this->___defaultValue_49;
		XRSlider_set_Value_m0EE6FB6914CF04ABFF2852FA781F5B536E9C3A0E_inline(__this, L_0, NULL);
		// ApplyValue(Value);
		float L_1;
		L_1 = XRSlider_get_Value_m41B41463BAABF34AC6E72384EB290E0A693C587C_inline(__this, NULL);
		XRSlider_ApplyValue_mE7BB5EE23D04F68A785E60CFC0A692CF29F67D88(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void XRSlider::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnEnable_mBDEF279BFF6850F8646E15250669962646373031 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_EndGrab_mC6ECDF569E83191E3A0A49BE7AF2820201671262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_StartGrab_m96607BF416E4719ABC4230DC02A0F3F0DC1935FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRBaseInteractable_OnEnable_m7BE7345371D6ED1B91C5EC90CDF8F34CE11E3366(__this, NULL);
		// selectEntered.AddListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRSlider_StartGrab_m96607BF416E4719ABC4230DC02A0F3F0DC1935FB_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_0, L_1, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRSlider_EndGrab_mC6ECDF569E83191E3A0A49BE7AF2820201671262_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_2, L_3, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRSlider::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_OnDisable_m597220388D37BAA3E0226A225283726B97510431 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_EndGrab_mC6ECDF569E83191E3A0A49BE7AF2820201671262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSlider_StartGrab_m96607BF416E4719ABC4230DC02A0F3F0DC1935FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		XRBaseInteractable_OnDisable_mB02958BFFAFF6C61A9FABE1D80056C3ABDCAB243(__this, NULL);
		// selectEntered.RemoveListener(StartGrab);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0;
		L_0 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_1 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_1, __this, (intptr_t)((void*)XRSlider_StartGrab_m96607BF416E4719ABC4230DC02A0F3F0DC1935FB_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_0, L_1, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// selectExited.RemoveListener(EndGrab);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_2;
		L_2 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_3 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_3, __this, (intptr_t)((void*)XRSlider_EndGrab_mC6ECDF569E83191E3A0A49BE7AF2820201671262_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_2, L_3, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRSlider::StartGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_StartGrab_m96607BF416E4719ABC4230DC02A0F3F0DC1935FB (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_eventArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectInteractor = eventArgs.interactorObject;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___0_eventArgs;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_0, NULL);
		__this->___selectInteractor_52 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectInteractor_52), (void*)L_1);
		// selectPosition = selectInteractor.transform.position;
		RuntimeObject* L_2 = __this->___selectInteractor_52;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___selectPosition_53 = L_4;
		// startingValue = Value;
		float L_5;
		L_5 = XRSlider_get_Value_m41B41463BAABF34AC6E72384EB290E0A693C587C_inline(__this, NULL);
		__this->___startingValue_54 = L_5;
		// }
		return;
	}
}
// System.Void XRSlider::EndGrab(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_EndGrab_mC6ECDF569E83191E3A0A49BE7AF2820201671262 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_eventArgs, const RuntimeMethod* method) 
{
	{
		// selectInteractor = null;
		__this->___selectInteractor_52 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectInteractor_52), (void*)(RuntimeObject*)NULL);
		// selectPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___selectPosition_53 = L_0;
		// startingValue = 0.0f;
		__this->___startingValue_54 = (0.0f);
		// }
		return;
	}
}
// System.Void XRSlider::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_ProcessInteractable_mC13C31DF4A19A318EFF98B4FE1949BAD825DC5A1 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, int32_t ___0_updatePhase, const RuntimeMethod* method) 
{
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_0 = ___0_updatePhase;
		XRBaseInteractable_ProcessInteractable_mD5D51C6B4F6673EE9380C4EA707DA67F7CF8B0F2(__this, L_0, NULL);
		// if (isSelected)
		bool L_1;
		L_1 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(__this, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
		int32_t L_2 = ___0_updatePhase;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		// Value = FindPullValue();
		float L_3;
		L_3 = XRSlider_FindPullValue_mC6F69D482A9F0CA9EB52D443AF7496B89D7275E1(__this, NULL);
		XRSlider_set_Value_m0EE6FB6914CF04ABFF2852FA781F5B536E9C3A0E_inline(__this, L_3, NULL);
		// ApplyValue(Value);
		float L_4;
		L_4 = XRSlider_get_Value_m41B41463BAABF34AC6E72384EB290E0A693C587C_inline(__this, NULL);
		XRSlider_ApplyValue_mE7BB5EE23D04F68A785E60CFC0A692CF29F67D88(__this, L_4, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Single XRSlider::FindPullValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSlider_FindPullValue_mC6F69D482A9F0CA9EB52D443AF7496B89D7275E1 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 pullDirection = selectInteractor.transform.position - selectPosition;
		RuntimeObject* L_0 = __this->___selectInteractor_52;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(5 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::get_transform() */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___selectPosition_53;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		// Vector3 targetDirection = end.position - start.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___end_48;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___start_47;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		V_0 = L_9;
		// float maxLength = targetDirection.magnitude;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_10;
		// targetDirection.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_0), NULL);
		// float pullValue = Vector3.Dot(pullDirection, targetDirection) / maxLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12;
		L_12 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_4, L_11, NULL);
		float L_13 = V_1;
		// pullValue += startingValue;
		float L_14 = __this->___startingValue_54;
		// return Mathf.Clamp(pullValue, 0.0f, 1.0f);
		float L_15;
		L_15 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(((float)(L_12/L_13)), L_14)), (0.0f), (1.0f), NULL);
		return L_15;
	}
}
// System.Void XRSlider::ApplyValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_ApplyValue_mE7BB5EE23D04F68A785E60CFC0A692CF29F67D88 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetHandlePosition(value);
		float L_0 = ___0_value;
		XRSlider_SetHandlePosition_m768980818A2C4793C63C604805F44840960B03A5(__this, L_0, NULL);
		// OnValueChange.Invoke(Value);
		ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275* L_1 = __this->___OnValueChange_50;
		float L_2;
		L_2 = XRSlider_get_Value_m41B41463BAABF34AC6E72384EB290E0A693C587C_inline(__this, NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_2, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void XRSlider::SetHandlePosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider_SetHandlePosition_m768980818A2C4793C63C604805F44840960B03A5 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, float ___0_blend, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 newPosition = Vector3.Lerp(start.position, end.position, blend);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___start_47;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___end_48;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = ___0_blend;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_1, L_3, L_4, NULL);
		V_0 = L_5;
		// handle.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___handle_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void XRSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSlider__ctor_mA390FA1FA736949770E8DFA75279E6CA36CB65F2 (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueChangeEvent OnValueChange = new ValueChangeEvent();
		ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275* L_0 = (ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275*)il2cpp_codegen_object_new(ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueChangeEvent__ctor_m94B40B5B65637B25CCCA8A30B1063CC5DA6F99D0(L_0, NULL);
		__this->___OnValueChange_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnValueChange_50), (void*)L_0);
		// private Vector3 selectPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___selectPosition_53 = L_1;
		XRBaseInteractable__ctor_m0B36974579D0C9F2799C4C5DE77B136C291247F4(__this, NULL);
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
// System.Void XRSlider/ValueChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangeEvent__ctor_m94B40B5B65637B25CCCA8A30B1063CC5DA6F99D0 (ValueChangeEvent_t032564922E62C94130446D7AC9DB670CE3A19275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void DisplayFPS::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayFPS_Awake_m0ADFAD9AE5EAE5B8DCA0124AEF0890F75670C5C4 (DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textOutput = GetComponentInChildren<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(__this, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		__this->___textOutput_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textOutput_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void DisplayFPS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayFPS_Start_m09337BCF14392F6CB85C2C9F8A15B50E684C086B (DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ShowFPS());
		RuntimeObject* L_0;
		L_0 = DisplayFPS_ShowFPS_mA02AC8E3F27617779F8DF673A9F477067BCBADD4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void DisplayFPS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayFPS_Update_m4F218976FF34C68C391F478434E43D8E2FCABE7D (DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* __this, const RuntimeMethod* method) 
{
	{
		// CalculateCurrentFPS();
		DisplayFPS_CalculateCurrentFPS_mB0DAE0A006C52E505E53AB6AD7B13FE711B421D4(__this, NULL);
		// }
		return;
	}
}
// System.Void DisplayFPS::CalculateCurrentFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayFPS_CalculateCurrentFPS_mB0DAE0A006C52E505E53AB6AD7B13FE711B421D4 (DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* __this, const RuntimeMethod* method) 
{
	{
		// deltaTime += (Time.unscaledDeltaTime - deltaTime) * 0.1f;
		float L_0 = __this->___deltaTime_8;
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_2 = __this->___deltaTime_8;
		__this->___deltaTime_8 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), (0.100000001f)))));
		// milliseconds = (deltaTime * 1000.0f);
		float L_3 = __this->___deltaTime_8;
		__this->___milliseconds_9 = ((float)il2cpp_codegen_multiply(L_3, (1000.0f)));
		// framesPerSecond = (int)(1.0f / deltaTime);
		float L_4 = __this->___deltaTime_8;
		__this->___framesPerSecond_10 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)((1.0f)/L_4)));
		// }
		return;
	}
}
// System.Collections.IEnumerator DisplayFPS::ShowFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisplayFPS_ShowFPS_mA02AC8E3F27617779F8DF673A9F477067BCBADD4 (DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E* L_0 = (U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E*)il2cpp_codegen_object_new(U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShowFPSU3Ed__11__ctor_mCB31E79FBF4BFFB4861F08E9FC144A9159C7829E(L_0, 0, NULL);
		U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DisplayFPS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayFPS__ctor_m7F12611998E32AD2F57B678C9B7DC16C4FE72170 (DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* __this, const RuntimeMethod* method) 
{
	{
		// public float updateInteval = 0.5f;
		__this->___updateInteval_6 = (0.5f);
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
// System.Void DisplayFPS/<ShowFPS>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowFPSU3Ed__11__ctor_mCB31E79FBF4BFFB4861F08E9FC144A9159C7829E (U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DisplayFPS/<ShowFPS>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowFPSU3Ed__11_System_IDisposable_Dispose_m66286264D9881E60863F984A267EAA5DAD7C8D77 (U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DisplayFPS/<ShowFPS>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowFPSU3Ed__11_MoveNext_mF94473F492FFD9B46FBEF3B469901FECE2479AB0 (U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral626EF77ABD00197B9E0E9015CCF21B7E2160F73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DFB335924F6E8DA7453E5E26AEF40C394666D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_00c0;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0021:
	{
		// if (framesPerSecond >= goodFpsThreshold)
		DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___framesPerSecond_10;
		if ((!(((float)((float)L_5)) >= ((float)(72.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// textOutput.color = Color.green;
		DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* L_6 = V_1;
		NullCheck(L_6);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = L_6->___textOutput_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		goto IL_0071;
	}

IL_0041:
	{
		// else if (framesPerSecond >= badFpsThreshold)
		DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___framesPerSecond_10;
		if ((!(((float)((float)L_10)) >= ((float)(50.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// textOutput.color = Color.yellow;
		DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* L_11 = V_1;
		NullCheck(L_11);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___textOutput_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		goto IL_0071;
	}

IL_0061:
	{
		// textOutput.color = Color.red;
		DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* L_14 = V_1;
		NullCheck(L_14);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = L_14->___textOutput_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
	}

IL_0071:
	{
		// textOutput.text = "FPS:" + framesPerSecond + "\n" + "MS:" + milliseconds.ToString(".0");
		DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* L_17 = V_1;
		NullCheck(L_17);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = L_17->___textOutput_7;
		DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* L_19 = V_1;
		NullCheck(L_19);
		int32_t* L_20 = (&L_19->___framesPerSecond_10);
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_20, NULL);
		DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* L_22 = V_1;
		NullCheck(L_22);
		float* L_23 = (&L_22->___milliseconds_9);
		String_t* L_24;
		L_24 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_23, _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA, NULL);
		String_t* L_25;
		L_25 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral9DFB335924F6E8DA7453E5E26AEF40C394666D86, L_21, _stringLiteral626EF77ABD00197B9E0E9015CCF21B7E2160F73F, L_24, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_25);
		// yield return new WaitForSeconds(updateInteval);
		DisplayFPS_tB2671F457B1DC5EEA4D6AC9F8FF6E60CC0E2151C* L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->___updateInteval_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_28 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_28, L_27, NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00c0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0021;
	}
}
// System.Object DisplayFPS/<ShowFPS>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowFPSU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6EDAC4435815D1A9487015755D9B73BE8BDB26CB (U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DisplayFPS/<ShowFPS>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowFPSU3Ed__11_System_Collections_IEnumerator_Reset_m1E65B77CB5AFAF445C8E92C943451924C551F97E (U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowFPSU3Ed__11_System_Collections_IEnumerator_Reset_m1E65B77CB5AFAF445C8E92C943451924C551F97E_RuntimeMethod_var)));
	}
}
// System.Object DisplayFPS/<ShowFPS>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowFPSU3Ed__11_System_Collections_IEnumerator_get_Current_m6F2CAD216B6B1E4C4884A09D2E33EBFCB747D58F (U3CShowFPSU3Ed__11_tFD6B6D1317E74BEAD28821416C089DD169A4F87E* __this, const RuntimeMethod* method) 
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
// System.Void Notes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notes__ctor_m92DB278560A9FAD3CFFC80F35D42D428BDE7F215 (Notes_t58128F96D60B74E677002784BF6BFF4A03FEBDED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF009B78A50F1102B3DC74DA0FAECC613AA75E457);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string notes = "- Add notes here";
		__this->___notes_4 = _stringLiteralF009B78A50F1102B3DC74DA0FAECC613AA75E457;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___notes_4), (void*)_stringLiteralF009B78A50F1102B3DC74DA0FAECC613AA75E457);
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
// System.Void TeleportAnchorWithFade::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAnchorWithFade_Awake_m1FB6D353B9AC4985D08311007D7B26A912D9C351 (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D_m17C3D28827A6D3B527408B739346E8373F7650AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		BaseTeleportationInteractable_Awake_mC0C13EE138834FD575C21D6CA01E1FC07F701600(__this, NULL);
		// fadeCanvas = FindObjectOfType<FadeCanvas>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* L_0;
		L_0 = Object_FindObjectOfType_TisFadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D_m17C3D28827A6D3B527408B739346E8373F7650AE(Object_FindObjectOfType_TisFadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D_m17C3D28827A6D3B527408B739346E8373F7650AE_RuntimeMethod_var);
		__this->___fadeCanvas_57 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fadeCanvas_57), (void*)L_0);
		// }
		return;
	}
}
// System.Void TeleportAnchorWithFade::OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAnchorWithFade_OnSelectEntered_mBE3433E76DD5DD8185C8FAE44AC32C959972742E (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTeleportationInteractable_OnSelectEntered_m0FD58F8C469202E81555C08B4362E2D23B620676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportAnchorWithFade_FadeSequence_TisSelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938_m79AAC9D5BDF03F192486C139F781709C6967D3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnSelectEntered(args);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___0_args;
		BaseTeleportationInteractable_OnSelectEntered_m0FD58F8C469202E81555C08B4362E2D23B620676(__this, L_0, NULL);
		// if (teleportTrigger == TeleportTrigger.OnSelectEntered)
		int32_t L_1;
		L_1 = BaseTeleportationInteractable_get_teleportTrigger_m875F50A1066F596DA0CB800997B84B4A0F8B1A94_inline(__this, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		// StartCoroutine(FadeSequence(base.OnSelectEntered, args));
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_2 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_2, __this, (intptr_t)((void*)BaseTeleportationInteractable_OnSelectEntered_m0FD58F8C469202E81555C08B4362E2D23B620676_RuntimeMethod_var), NULL);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_3 = ___0_args;
		RuntimeObject* L_4;
		L_4 = TeleportAnchorWithFade_FadeSequence_TisSelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938_m79AAC9D5BDF03F192486C139F781709C6967D3BB(__this, L_2, L_3, TeleportAnchorWithFade_FadeSequence_TisSelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938_m79AAC9D5BDF03F192486C139F781709C6967D3BB_RuntimeMethod_var);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void TeleportAnchorWithFade::OnSelectExited(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAnchorWithFade_OnSelectExited_m898F5727C31865A8E8F4ACABDDB33393198896D2 (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTeleportationInteractable_OnSelectExited_m104024A13FA59E4110738133C4FB571DB6607E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportAnchorWithFade_FadeSequence_TisSelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A_m4C65299DA254C53F5505B93CE718F9FF6777D28A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (teleportTrigger == TeleportTrigger.OnSelectExited)
		int32_t L_0;
		L_0 = BaseTeleportationInteractable_get_teleportTrigger_m875F50A1066F596DA0CB800997B84B4A0F8B1A94_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// StartCoroutine(FadeSequence(base.OnSelectExited, args));
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_1 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_1, __this, (intptr_t)((void*)BaseTeleportationInteractable_OnSelectExited_m104024A13FA59E4110738133C4FB571DB6607E83_RuntimeMethod_var), NULL);
		SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* L_2 = ___0_args;
		RuntimeObject* L_3;
		L_3 = TeleportAnchorWithFade_FadeSequence_TisSelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A_m4C65299DA254C53F5505B93CE718F9FF6777D28A(__this, L_1, L_2, TeleportAnchorWithFade_FadeSequence_TisSelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A_m4C65299DA254C53F5505B93CE718F9FF6777D28A_RuntimeMethod_var);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void TeleportAnchorWithFade::OnActivated(UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAnchorWithFade_OnActivated_m4D5630052D4E0C32ECA8481A1FED8F109A1A8C9A (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTeleportationInteractable_OnActivated_m3519F32AD8EF48DEA2DC762AA0203AC2CA2BF9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportAnchorWithFade_FadeSequence_TisActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E_mE9F327084376ACC7E5FF811A30AA1E62DAD63663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (teleportTrigger == TeleportTrigger.OnActivated)
		int32_t L_0;
		L_0 = BaseTeleportationInteractable_get_teleportTrigger_m875F50A1066F596DA0CB800997B84B4A0F8B1A94_inline(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		// StartCoroutine(FadeSequence(base.OnActivated, args));
		UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* L_1 = (UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*)il2cpp_codegen_object_new(UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mF849D1CE17A326AA2C8F72F3A2BDF6C3C987D4C1(L_1, __this, (intptr_t)((void*)BaseTeleportationInteractable_OnActivated_m3519F32AD8EF48DEA2DC762AA0203AC2CA2BF9E7_RuntimeMethod_var), NULL);
		ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E* L_2 = ___0_args;
		RuntimeObject* L_3;
		L_3 = TeleportAnchorWithFade_FadeSequence_TisActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E_mE9F327084376ACC7E5FF811A30AA1E62DAD63663(__this, L_1, L_2, TeleportAnchorWithFade_FadeSequence_TisActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E_mE9F327084376ACC7E5FF811A30AA1E62DAD63663_RuntimeMethod_var);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void TeleportAnchorWithFade::OnDeactivated(UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAnchorWithFade_OnDeactivated_mD100C2D65FE2CD2E1FC991AF85ECBE4570B6C203 (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, DeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTeleportationInteractable_OnDeactivated_mCC3F748F7269D8A30EED80532E054CF274283D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportAnchorWithFade_FadeSequence_TisDeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0_m6528AECE1A19812DE20A67A15022951AF44B9AD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (teleportTrigger == TeleportTrigger.OnDeactivated)
		int32_t L_0;
		L_0 = BaseTeleportationInteractable_get_teleportTrigger_m875F50A1066F596DA0CB800997B84B4A0F8B1A94_inline(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0023;
		}
	}
	{
		// StartCoroutine(FadeSequence(base.OnDeactivated, args));
		UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4* L_1 = (UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4*)il2cpp_codegen_object_new(UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mBDA1C72DBC9318EED1EF6E8E768E9E9FB88E487E(L_1, __this, (intptr_t)((void*)BaseTeleportationInteractable_OnDeactivated_mCC3F748F7269D8A30EED80532E054CF274283D4E_RuntimeMethod_var), NULL);
		DeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0* L_2 = ___0_args;
		RuntimeObject* L_3;
		L_3 = TeleportAnchorWithFade_FadeSequence_TisDeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0_m6528AECE1A19812DE20A67A15022951AF44B9AD5(__this, L_1, L_2, TeleportAnchorWithFade_FadeSequence_TisDeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0_m6528AECE1A19812DE20A67A15022951AF44B9AD5_RuntimeMethod_var);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void TeleportAnchorWithFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAnchorWithFade__ctor_mB46F9199E50416A5BC59254E58C9019E5085082F (TeleportAnchorWithFade_tEDBEDF9247131737551432287857CBB6F9785C91* __this, const RuntimeMethod* method) 
{
	{
		TeleportationAnchor__ctor_m8645304E8AFD708D9BF3C8E3B8D2F64F9CEBA427(__this, NULL);
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
// System.Void TeleportAreaWithFade::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAreaWithFade_Awake_m6FCD4D037102089C4D3129DE312A070D306FEF23 (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D_m17C3D28827A6D3B527408B739346E8373F7650AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		BaseTeleportationInteractable_Awake_mC0C13EE138834FD575C21D6CA01E1FC07F701600(__this, NULL);
		// fadeCanvas = FindObjectOfType<FadeCanvas>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* L_0;
		L_0 = Object_FindObjectOfType_TisFadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D_m17C3D28827A6D3B527408B739346E8373F7650AE(Object_FindObjectOfType_TisFadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D_m17C3D28827A6D3B527408B739346E8373F7650AE_RuntimeMethod_var);
		__this->___fadeCanvas_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fadeCanvas_56), (void*)L_0);
		// }
		return;
	}
}
// System.Void TeleportAreaWithFade::OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAreaWithFade_OnSelectEntered_m286A00D6B0E46C5789D91D3A37BDBAA1BAC5C209 (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTeleportationInteractable_OnSelectEntered_m0FD58F8C469202E81555C08B4362E2D23B620676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportAreaWithFade_FadeSequence_TisSelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938_mDFFB0CC3FBC703AB69088585ECAF7375389F2AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnSelectEntered(args);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___0_args;
		BaseTeleportationInteractable_OnSelectEntered_m0FD58F8C469202E81555C08B4362E2D23B620676(__this, L_0, NULL);
		// if (teleportTrigger == TeleportTrigger.OnSelectEntered)
		int32_t L_1;
		L_1 = BaseTeleportationInteractable_get_teleportTrigger_m875F50A1066F596DA0CB800997B84B4A0F8B1A94_inline(__this, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		// StartCoroutine(FadeSequence(base.OnSelectEntered, args));
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_2 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_2, __this, (intptr_t)((void*)BaseTeleportationInteractable_OnSelectEntered_m0FD58F8C469202E81555C08B4362E2D23B620676_RuntimeMethod_var), NULL);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_3 = ___0_args;
		RuntimeObject* L_4;
		L_4 = TeleportAreaWithFade_FadeSequence_TisSelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938_mDFFB0CC3FBC703AB69088585ECAF7375389F2AA8(__this, L_2, L_3, TeleportAreaWithFade_FadeSequence_TisSelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938_mDFFB0CC3FBC703AB69088585ECAF7375389F2AA8_RuntimeMethod_var);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void TeleportAreaWithFade::OnSelectExited(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAreaWithFade_OnSelectExited_m7744350FD1F4CE7EDD34B7AB5996983F60525FB3 (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTeleportationInteractable_OnSelectExited_m104024A13FA59E4110738133C4FB571DB6607E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportAreaWithFade_FadeSequence_TisSelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A_mC78D0C1265F7DB748F7E998491B5B29B6719C520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (teleportTrigger == TeleportTrigger.OnSelectExited)
		int32_t L_0;
		L_0 = BaseTeleportationInteractable_get_teleportTrigger_m875F50A1066F596DA0CB800997B84B4A0F8B1A94_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// StartCoroutine(FadeSequence(base.OnSelectExited, args));
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_1 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_1, __this, (intptr_t)((void*)BaseTeleportationInteractable_OnSelectExited_m104024A13FA59E4110738133C4FB571DB6607E83_RuntimeMethod_var), NULL);
		SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* L_2 = ___0_args;
		RuntimeObject* L_3;
		L_3 = TeleportAreaWithFade_FadeSequence_TisSelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A_mC78D0C1265F7DB748F7E998491B5B29B6719C520(__this, L_1, L_2, TeleportAreaWithFade_FadeSequence_TisSelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A_mC78D0C1265F7DB748F7E998491B5B29B6719C520_RuntimeMethod_var);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void TeleportAreaWithFade::OnActivated(UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAreaWithFade_OnActivated_mD02D3C0AA67E5FD59F4640D05609ED736954C993 (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTeleportationInteractable_OnActivated_m3519F32AD8EF48DEA2DC762AA0203AC2CA2BF9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportAreaWithFade_FadeSequence_TisActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E_mD23F46521F677509CFBE8584B6D8C545BDA87D02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (teleportTrigger == TeleportTrigger.OnActivated)
		int32_t L_0;
		L_0 = BaseTeleportationInteractable_get_teleportTrigger_m875F50A1066F596DA0CB800997B84B4A0F8B1A94_inline(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		// StartCoroutine(FadeSequence(base.OnActivated, args));
		UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5* L_1 = (UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5*)il2cpp_codegen_object_new(UnityAction_1_tF96B0EA61E25133CB537E4BDE3C90EF3387FF7E5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mF849D1CE17A326AA2C8F72F3A2BDF6C3C987D4C1(L_1, __this, (intptr_t)((void*)BaseTeleportationInteractable_OnActivated_m3519F32AD8EF48DEA2DC762AA0203AC2CA2BF9E7_RuntimeMethod_var), NULL);
		ActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E* L_2 = ___0_args;
		RuntimeObject* L_3;
		L_3 = TeleportAreaWithFade_FadeSequence_TisActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E_mD23F46521F677509CFBE8584B6D8C545BDA87D02(__this, L_1, L_2, TeleportAreaWithFade_FadeSequence_TisActivateEventArgs_tAC81C18EA24D76411EE5A5D61523A551CCB46C3E_mD23F46521F677509CFBE8584B6D8C545BDA87D02_RuntimeMethod_var);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void TeleportAreaWithFade::OnDeactivated(UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAreaWithFade_OnDeactivated_mE5A98A8A91D12D8380B1A1530EE12703648FAC10 (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, DeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTeleportationInteractable_OnDeactivated_mCC3F748F7269D8A30EED80532E054CF274283D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportAreaWithFade_FadeSequence_TisDeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0_m62B63A70E2F5ADC4A3C5DF65770C54BD55EC5A6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (teleportTrigger == TeleportTrigger.OnDeactivated)
		int32_t L_0;
		L_0 = BaseTeleportationInteractable_get_teleportTrigger_m875F50A1066F596DA0CB800997B84B4A0F8B1A94_inline(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0023;
		}
	}
	{
		// StartCoroutine(FadeSequence(base.OnDeactivated, args));
		UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4* L_1 = (UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4*)il2cpp_codegen_object_new(UnityAction_1_t004E838882A666E66702D0EC5DEA62C3733839C4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_mBDA1C72DBC9318EED1EF6E8E768E9E9FB88E487E(L_1, __this, (intptr_t)((void*)BaseTeleportationInteractable_OnDeactivated_mCC3F748F7269D8A30EED80532E054CF274283D4E_RuntimeMethod_var), NULL);
		DeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0* L_2 = ___0_args;
		RuntimeObject* L_3;
		L_3 = TeleportAreaWithFade_FadeSequence_TisDeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0_m62B63A70E2F5ADC4A3C5DF65770C54BD55EC5A6C(__this, L_1, L_2, TeleportAreaWithFade_FadeSequence_TisDeactivateEventArgs_t7AE1163C39B5B95A4501EC961D8D643C369774D0_m62B63A70E2F5ADC4A3C5DF65770C54BD55EC5A6C_RuntimeMethod_var);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void TeleportAreaWithFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportAreaWithFade__ctor_mCBF06B284579211CEDD6678AB691497F0DE2EA86 (TeleportAreaWithFade_t0B043D243F3837D495C119CBEBE9CA2E5DFA3BB0* __this, const RuntimeMethod* method) 
{
	{
		TeleportationArea__ctor_mBD0DD39D29BA373207C79E8600D8F183D3E14EFB(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___0_H, float ___1_S, float ___2_V, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_H;
		float L_1 = ___1_S;
		float L_2 = ___2_V;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FadeCanvas_set_CurrentRoutine_m27241B5B956B0E4C67D7E939C5D523AFB3A9B780_inline (FadeCanvas_t651A2BE9D9455AF05EA99C50D7694C2FF113639D* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Coroutine CurrentRoutine { private set; get; } = null;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = ___0_value;
		__this->___U3CCurrentRoutineU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentRoutineU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___2_value;
		float L_4 = ___0_a;
		float L_5 = ___1_b;
		float L_6 = ___0_a;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* XRBaseInteractor_get_interactionManager_mD7FB7431097431DD95D2333E58A5052DF106E09F_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InteractionManager;
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_0 = __this->___m_InteractionManager_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRBaseControllerInteractor_get_selectActionTrigger_mCB494C7BA0CBE50A36F058E35AA3AC521C9D2010_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectActionTrigger;
		int32_t L_0 = __this->___m_SelectActionTrigger_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseControllerInteractor_set_selectActionTrigger_mED28C90236E93293019D4F9132AA5C3447861A88_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_SelectActionTrigger = value;
		int32_t L_0 = ___0_value;
		__this->___m_SelectActionTrigger_42 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 XRBaseInteractor_get_interactionLayers_m83DCB38A70922078AEBD323EBD7EDBEB6A70D00D_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InteractionLayers;
		InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 L_0 = __this->___m_InteractionLayers_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseInteractor_set_interactionLayers_mA988AF491A54DB866194C07D5E374780543B77D8_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_InteractionLayers = value;
		InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 L_0 = ___0_value;
		__this->___m_InteractionLayers_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TeleportationAnchor_get_teleportAnchorTransform_m0711868C6E4463287017D36942E8A5C03122A435_inline (TeleportationAnchor_t5C73F0B7F59911E6F9F98FA9156ECBC6E9DD9085* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TeleportAnchorTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_TeleportAnchorTransform_56;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseTeleportationInteractable_get_matchOrientation_mB4CE35CEB0A0206457993CB28A618F300E4BC03D_inline (BaseTeleportationInteractable_t3CA78AC694D6BFBA115E724F2C104AB069449AE8* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MatchOrientation;
		int32_t L_0 = __this->___m_MatchOrientation_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* XRBaseInteractable_get_hoverEntered_m49384274F14DF80AC8FEFC1D214B7ACD41C67FB5_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverEntered;
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_0 = __this->___m_HoverEntered_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* XRBaseInteractable_get_hoverExited_m6A0E55603A368A85D086A00AEFD032A434CF6162_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HoverExited;
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_0 = __this->___m_HoverExited_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0 = __this->___m_SelectEntered_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRJoystick_set_Value_m694DB106F38D758A8EF0EFE73C5E106F96763EF1_inline (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 Value { get; private set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_51 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRJoystick_get_Value_mF49BC0A4B9416B7AC7BE7FB06A64C804151311D6_inline (XRJoystick_t6762F2F4F89EFFF2CD5DF593741109682EAE2D55* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Value { get; private set; } = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CValueU3Ek__BackingField_51;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRKnob_set_Angle_mAF3F22FD68F49D5D0761D36C213874CFC1141757_inline (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Angle { get; private set; } = 0.0f;
		float L_0 = ___0_value;
		__this->___U3CAngleU3Ek__BackingField_52 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRKnob_get_Angle_m9BCC3C3132FA6FFAB210D92F1B1B966BE928684A_inline (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) 
{
	{
		// public float Angle { get; private set; } = 0.0f;
		float L_0 = __this->___U3CAngleU3Ek__BackingField_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_axis, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_to;
		float L_2;
		L_2 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_from;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_to;
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_from;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_to;
		float L_10 = L_9.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_10))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_from;
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_to;
		float L_14 = L_13.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___0_from;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___1_to;
		float L_18 = L_17.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_12, L_14)), ((float)il2cpp_codegen_multiply(L_16, L_18))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_from;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___1_to;
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_from;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___1_to;
		float L_26 = L_25.___x_2;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, L_22)), ((float)il2cpp_codegen_multiply(L_24, L_26))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___2_axis;
		float L_28 = L_27.___x_2;
		float L_29 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___2_axis;
		float L_31 = L_30.___y_3;
		float L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___2_axis;
		float L_34 = L_33.___z_4;
		float L_35 = V_3;
		float L_36;
		L_36 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_31, L_32)))), ((float)il2cpp_codegen_multiply(L_34, L_35)))), NULL);
		V_4 = L_36;
		float L_37 = V_0;
		float L_38 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		goto IL_0086;
	}

IL_0086:
	{
		float L_39 = V_5;
		return L_39;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRKnob_set_Value_m408E8821B4F35EE520F4318D4B2951600C340A1C_inline (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Value { get; private set; } = 0.0f;
		float L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_51 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRKnob_get_Value_m40D6F73992F439850EA85E49448CBFF20399E701_inline (XRKnob_tA2CEC18522CECB2A2A5E4403B0DC017C2BC82509* __this, const RuntimeMethod* method) 
{
	{
		// public float Value { get; private set; } = 0.0f;
		float L_0 = __this->___U3CValueU3Ek__BackingField_51;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRLever_set_Value_mF72830809FEF43727B9F2F30493D2B92FFD13436_inline (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Value { get; private set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_50 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRLever_get_Value_m7E067A17EE3919C5087E826CF62ACFDC8155D19F_inline (XRLever_t774E0B437A68993D1480561D7C9B07A218CE82C6* __this, const RuntimeMethod* method) 
{
	{
		// public bool Value { get; private set; } = false;
		bool L_0 = __this->___U3CValueU3Ek__BackingField_50;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSlider_set_Value_m0EE6FB6914CF04ABFF2852FA781F5B536E9C3A0E_inline (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Value { get; private set; } = 0.0f;
		float L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_51 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRSlider_get_Value_m41B41463BAABF34AC6E72384EB290E0A693C587C_inline (XRSlider_tEC9EA87CDFF84FF0ED61DEB3A42FB4F64F0411CC* __this, const RuntimeMethod* method) 
{
	{
		// public float Value { get; private set; } = 0.0f;
		float L_0 = __this->___U3CValueU3Ek__BackingField_51;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseTeleportationInteractable_get_teleportTrigger_m875F50A1066F596DA0CB800997B84B4A0F8B1A94_inline (BaseTeleportationInteractable_t3CA78AC694D6BFBA115E724F2C104AB069449AE8* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TeleportTrigger;
		int32_t L_0 = __this->___m_TeleportTrigger_50;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_to;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
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
