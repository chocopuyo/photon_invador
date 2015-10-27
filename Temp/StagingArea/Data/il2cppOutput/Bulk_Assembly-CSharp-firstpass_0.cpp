#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

struct t1;
struct t3;
struct t2;
struct t26;
struct t27;
struct t6;
struct t12;
struct t30;
struct t31;
struct t11;
struct t14;
struct t15;
struct t16;
struct t10;
struct t33;
struct t34;
struct t20;
struct t21;
struct t23;
struct t24;
struct t25;
struct t35;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t36.h"
#include "t0.h"
#include "t0MD.h"
#include "t1.h"
#include "t1MD.h"
#include "t37.h"
#include "t3.h"
#include "t4MD.h"
#include "t5MD.h"
#include "t2MD.h"
#include "t4.h"
#include "t5.h"
#include "t38.h"
#include "t39.h"
#include "t2.h"
#include "mscorlib_ArrayTypes.h"
#include "t40MD.h"
#include "t3MD.h"
#include "t40.h"
#include "t6.h"
#include "t6MD.h"
#include "t28.h"
#include "t41MD.h"
#include "t10MD.h"
#include "t9MD.h"
#include "t7.h"
#include "t10.h"
#include "t9.h"
#include "t29.h"
#include "t30.h"
#include "t42.h"
#include "t31.h"
#include "t43.h"
#include "t32.h"
#include "t17MD.h"
#include "t11.h"
#include "t17.h"
#include "t8.h"
#include "t11MD.h"
#include "t44MD.h"
#include "t45.h"
#include "t46MD.h"
#include "t46.h"
#include "t30MD.h"
#include "t31MD.h"
#include "t8MD.h"
#include "t14.h"
#include "t14MD.h"
#include "t15.h"
#include "t15MD.h"
#include "t16.h"
#include "t16MD.h"
#include "t48.h"
#include "t48MD.h"
#include "t18MD.h"
#include "t18.h"
#include "t19.h"
#include "t19MD.h"
#include "t25MD.h"
#include "t20.h"
#include "t20MD.h"
#include "t21.h"
#include "t21MD.h"
#include "t7MD.h"
#include "t22.h"
#include "t22MD.h"
#include "t23.h"
#include "t23MD.h"
#include "t24MD.h"
#include "t49.h"
#include "t24.h"
#include "t25.h"
#include "t50MD.h"
#include "t50.h"
#include "t51MD.h"
#include "t51.h"
#include "t52MD.h"
#include "t52.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern TypeInfo* t4_TI_var;
extern TypeInfo* t5_TI_var;
extern const MethodInfo* m113_MI_var;
extern const MethodInfo* m114_MI_var;
extern "C" void m0 (t1 * __this, t3* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t4_TI_var = il2cpp_codegen_type_info_from_index(2);
		t5_TI_var = il2cpp_codegen_type_info_from_index(3);
		m113_MI_var = il2cpp_codegen_method_info_from_index(2147483649);
		m114_MI_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		t4 * L_0 = (t4 *)il2cpp_codegen_object_new (t4_TI_var);
		m113(L_0, m113_MI_var);
		__this->f1 = L_0;
		t5 * L_1 = (t5 *)il2cpp_codegen_object_new (t5_TI_var);
		m114(L_1, m114_MI_var);
		__this->f2 = L_1;
		m115(__this, NULL);
		t3* L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern "C" bool m1 (t1 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2 (t1 * __this, bool p0, const MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" int32_t m3 (t1 * __this, const MethodInfo* method)
{
	{
		t5 * L_0 = (__this->f2);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_0);
		return L_1;
	}
}
extern "C" void m4 (t1 * __this, t3* p0, t2 * p1, const MethodInfo* method)
{
	{
		t4 * L_0 = (__this->f1);
		t3* L_1 = p0;
		VirtActionInvoker1< t3* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_0, L_1);
		t5 * L_2 = (__this->f2);
		t2 * L_3 = p1;
		VirtActionInvoker1< t2 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_2, L_3);
		return;
	}
}
extern const MethodInfo* m116_MI_var;
extern const MethodInfo* m117_MI_var;
extern "C" void m5 (t1 * __this, t26* p0, t27* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		m116_MI_var = il2cpp_codegen_method_info_from_index(2147483651);
		m117_MI_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		t4 * L_0 = (__this->f1);
		t26* L_1 = p0;
		m116(L_0, (t2*)(t2*)L_1, m116_MI_var);
		t5 * L_2 = (__this->f2);
		t27* L_3 = p1;
		m117(L_2, (t2*)(t2*)L_3, m117_MI_var);
		return;
	}
}
extern "C" void m6 (t1 * __this, const MethodInfo* method)
{
	{
		t4 * L_0 = (__this->f1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.String>::Clear() */, L_0);
		t5 * L_1 = (__this->f2);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.Object>::Clear() */, L_1);
		return;
	}
}
extern TypeInfo* t40_TI_var;
extern TypeInfo* t3_TI_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern "C" t3* m7 (t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t40_TI_var = il2cpp_codegen_type_info_from_index(4);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	t40 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t40 * L_0 = (t40 *)il2cpp_codegen_object_new (t40_TI_var);
		m118(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003a;
	}

IL_000d:
	{
		t40 * L_1 = V_0;
		t4 * L_2 = (__this->f1);
		int32_t L_3 = V_1;
		t3* L_4 = (t3*)VirtFuncInvoker1< t3*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_2, L_3);
		t5 * L_5 = (__this->f2);
		int32_t L_6 = V_1;
		t2 * L_7 = (t2 *)VirtFuncInvoker1< t2 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, L_5, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_8 = m119(NULL, _stringLiteral0, L_4, L_7, NULL);
		m120(L_1, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_10 = V_1;
		t5 * L_11 = (__this->f2);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000d;
		}
	}
	{
		t40 * L_13 = V_0;
		t3* L_14 = m121(L_13, NULL);
		return L_14;
	}
}
extern TypeInfo* t10_TI_var;
extern TypeInfo* t9_TI_var;
extern const MethodInfo* m123_MI_var;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern "C" void m8 (t6 * __this, t2 * p0, uint8_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t10_TI_var = il2cpp_codegen_type_info_from_index(6);
		t9_TI_var = il2cpp_codegen_type_info_from_index(7);
		m123_MI_var = il2cpp_codegen_method_info_from_index(2147483653);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->f2 = _stringLiteral1;
		__this->f8 = ((int32_t)50);
		m115(__this, NULL);
		uint8_t L_0 = p1;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0034;
		}
	}
	{
		uint8_t L_1 = p1;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0034;
		}
	}
	{
		m122(NULL, _stringLiteral2, NULL);
		p1 = 5;
	}

IL_0034:
	{
		t2 * L_2 = p0;
		__this->f5 = L_2;
		m20(__this, 0, NULL);
		uint8_t L_3 = p1;
		t10 * L_4 = (t10 *)il2cpp_codegen_object_new (t10_TI_var);
		m66(L_4, __this, L_3, NULL);
		__this->f6 = L_4;
		t9 * L_5 = (t9 *)il2cpp_codegen_object_new (t9_TI_var);
		m123(L_5, m123_MI_var);
		__this->f3 = L_5;
		t9 * L_6 = (t9 *)il2cpp_codegen_object_new (t9_TI_var);
		m123(L_6, m123_MI_var);
		__this->f4 = L_6;
		return;
	}
}
extern TypeInfo* t12_TI_var;
extern "C" void m9 (t6 * __this, uint8_t p0, t3* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2 * L_0 = (__this->f5);
		uint8_t L_1 = p0;
		t3* L_2 = p1;
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_0, L_1, L_2);
		return;
	}
}
extern "C" void m10 (t6 * __this, t30 * p0, const MethodInfo* method)
{
	uint8_t V_0 = 0x0;
	{
		t30 * L_0 = p0;
		uint8_t L_1 = (L_0->f0);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_002e;
		}
		if (L_2 == 1)
		{
			goto IL_006a;
		}
		if (L_2 == 2)
		{
			goto IL_003a;
		}
		if (L_2 == 3)
		{
			goto IL_006a;
		}
		if (L_2 == 4)
		{
			goto IL_0046;
		}
		if (L_2 == 5)
		{
			goto IL_0052;
		}
		if (L_2 == 6)
		{
			goto IL_005e;
		}
	}
	{
		goto IL_006a;
	}

IL_002e:
	{
		t30 * L_3 = p0;
		m56(__this, L_3, NULL);
		goto IL_006a;
	}

IL_003a:
	{
		t30 * L_4 = p0;
		m55(__this, L_4, NULL);
		goto IL_006a;
	}

IL_0046:
	{
		t30 * L_5 = p0;
		m60(__this, L_5, NULL);
		goto IL_006a;
	}

IL_0052:
	{
		t30 * L_6 = p0;
		m57(__this, L_6, NULL);
		goto IL_006a;
	}

IL_005e:
	{
		t30 * L_7 = p0;
		m58(__this, L_7, NULL);
		goto IL_006a;
	}

IL_006a:
	{
		return;
	}
}
extern TypeInfo* t42_TI_var;
extern TypeInfo* t3_TI_var;
extern TypeInfo* t12_TI_var;
extern TypeInfo* t43_TI_var;
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern "C" void m11 (t6 * __this, t31 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t42_TI_var = il2cpp_codegen_type_info_from_index(9);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		t43_TI_var = il2cpp_codegen_type_info_from_index(10);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		t31 * L_0 = p0;
		uint8_t L_1 = (L_0->f0);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_0039;
		}
		if (L_2 == 1)
		{
			goto IL_0039;
		}
		if (L_2 == 2)
		{
			goto IL_0039;
		}
		if (L_2 == 3)
		{
			goto IL_0039;
		}
	}
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)230))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0039;
	}

IL_002d:
	{
		t31 * L_4 = p0;
		m59(__this, L_4, NULL);
		goto IL_00ae;
	}

IL_0039:
	{
		t31 * L_5 = p0;
		int16_t L_6 = (L_5->f1);
		if (!L_6)
		{
			goto IL_00a9;
		}
	}
	{
		t31 * L_7 = p0;
		int16_t L_8 = (L_7->f1);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0077;
		}
	}
	{
		t2 * L_9 = (__this->f5);
		t31 * L_10 = p0;
		uint8_t L_11 = (L_10->f0);
		uint8_t L_12 = L_11;
		t2 * L_13 = Box(t42_TI_var, &L_12);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_14 = m124(NULL, _stringLiteral3, L_13, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_9, 1, L_14);
		goto IL_00a9;
	}

IL_0077:
	{
		t2 * L_15 = (__this->f5);
		t31 * L_16 = p0;
		uint8_t L_17 = (L_16->f0);
		uint8_t L_18 = L_17;
		t2 * L_19 = Box(t42_TI_var, &L_18);
		t31 * L_20 = p0;
		int16_t L_21 = (L_20->f1);
		int16_t L_22 = L_21;
		t2 * L_23 = Box(t43_TI_var, &L_22);
		t31 * L_24 = p0;
		t3* L_25 = (L_24->f2);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_26 = m125(NULL, _stringLiteral4, L_19, L_23, L_25, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_15, 1, L_26);
	}

IL_00a9:
	{
		goto IL_00ae;
	}

IL_00ae:
	{
		return;
	}
}
extern TypeInfo* t7_TI_var;
extern TypeInfo* t3_TI_var;
extern TypeInfo* t33_TI_var;
extern TypeInfo* t12_TI_var;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral6;
extern Il2CppCodeGenString* _stringLiteral7;
extern "C" void m12 (t6 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t7_TI_var = il2cpp_codegen_type_info_from_index(11);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t33_TI_var = il2cpp_codegen_type_info_from_index(12);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1025))))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1048))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1049))))
		{
			goto IL_0164;
		}
	}
	{
		goto IL_01b8;
	}

IL_0033:
	{
		t10 * L_5 = (__this->f6);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::get_IsProtocolSecure() */, L_5);
		if (L_6)
		{
			goto IL_005e;
		}
	}
	{
		m122(NULL, _stringLiteral5, NULL);
		t10 * L_7 = (__this->f6);
		m126(L_7, NULL);
		goto IL_00c3;
	}

IL_005e:
	{
		m122(NULL, _stringLiteral6, NULL);
		bool L_8 = (__this->f7);
		if (L_8)
		{
			goto IL_00c3;
		}
	}
	{
		t10 * L_9 = (__this->f6);
		t3* L_10 = m27(__this, NULL);
		t3* L_11 = m25(__this, NULL);
		t3* L_12 = (__this->f2);
		t11 * L_13 = m29(__this, NULL);
		bool L_14 = m72(L_9, L_10, L_11, L_12, L_13, NULL);
		__this->f7 = L_14;
		bool L_15 = (__this->f7);
		if (L_15)
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_16 = m19(__this, NULL);
		int32_t L_17 = L_16;
		t2 * L_18 = Box(t7_TI_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_19 = m127(NULL, _stringLiteral7, L_18, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t33_TI_var, __this, 1, L_19);
	}

IL_00c3:
	{
		int32_t L_20 = m19(__this, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_00ec;
		}
	}
	{
		m20(__this, 2, NULL);
		t2 * L_21 = (__this->f5);
		int32_t L_22 = m19(__this, NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState) */, t12_TI_var, L_21, L_22);
		goto IL_00ff;
	}

IL_00ec:
	{
		int32_t L_23 = m19(__this, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)6))))
		{
			goto IL_00ff;
		}
	}
	{
		m62(__this, NULL);
	}

IL_00ff:
	{
		goto IL_01b8;
	}

IL_0104:
	{
		bool L_24 = (__this->f7);
		if (L_24)
		{
			goto IL_015f;
		}
	}
	{
		t10 * L_25 = (__this->f6);
		t3* L_26 = m27(__this, NULL);
		t3* L_27 = m25(__this, NULL);
		t3* L_28 = (__this->f2);
		t11 * L_29 = m29(__this, NULL);
		bool L_30 = m72(L_25, L_26, L_27, L_28, L_29, NULL);
		__this->f7 = L_30;
		bool L_31 = (__this->f7);
		if (L_31)
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_32 = m19(__this, NULL);
		int32_t L_33 = L_32;
		t2 * L_34 = Box(t7_TI_var, &L_33);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_35 = m127(NULL, _stringLiteral7, L_34, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t33_TI_var, __this, 1, L_35);
	}

IL_015f:
	{
		goto IL_01b8;
	}

IL_0164:
	{
		m20(__this, ((int32_t)10), NULL);
		t10 * L_36 = (__this->f6);
		VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_36);
		goto IL_01b8;
	}

IL_017c:
	{
		int32_t L_37 = m19(__this, NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)4))))
		{
			goto IL_0193;
		}
	}
	{
		m61(__this, NULL);
		goto IL_01b3;
	}

IL_0193:
	{
		m20(__this, ((int32_t)11), NULL);
		t2 * L_38 = (__this->f5);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState) */, t12_TI_var, L_38, ((int32_t)11));
		t2 * L_39 = (__this->f5);
		InterfaceActionInvoker0::Invoke(1 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnDisconnected() */, t12_TI_var, L_39);
	}

IL_01b3:
	{
		goto IL_01b8;
	}

IL_01b8:
	{
		return;
	}
}
extern "C" t3* m13 (t6 * __this, const MethodInfo* method)
{
	{
		t3* L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" void m14 (t6 * __this, t3* p0, const MethodInfo* method)
{
	{
		t3* L_0 = p0;
		__this->f10 = L_0;
		return;
	}
}
extern "C" t3* m15 (t6 * __this, const MethodInfo* method)
{
	{
		t3* L_0 = (__this->f11);
		return L_0;
	}
}
extern "C" void m16 (t6 * __this, t3* p0, const MethodInfo* method)
{
	{
		t3* L_0 = p0;
		__this->f11 = L_0;
		return;
	}
}
extern "C" t3* m17 (t6 * __this, const MethodInfo* method)
{
	{
		t3* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m18 (t6 * __this, t3* p0, const MethodInfo* method)
{
	{
		t3* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m19 (t6 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" void m20 (t6 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f12 = L_0;
		return;
	}
}
extern "C" int32_t m21 (t6 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f13);
		return L_0;
	}
}
extern "C" void m22 (t6 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f13 = L_0;
		return;
	}
}
extern "C" bool m23 (t6 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = m19(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = m24(__this, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
extern "C" bool m24 (t6 * __this, const MethodInfo* method)
{
	{
		t10 * L_0 = (__this->f6);
		return ((((int32_t)((((t2*)(t10 *)L_0) == ((t2*)(t2 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t3* m25 (t6 * __this, const MethodInfo* method)
{
	{
		t3* L_0 = (__this->f14);
		return L_0;
	}
}
extern "C" void m26 (t6 * __this, t3* p0, const MethodInfo* method)
{
	{
		t3* L_0 = p0;
		__this->f14 = L_0;
		return;
	}
}
extern "C" t3* m27 (t6 * __this, const MethodInfo* method)
{
	{
		t3* L_0 = (__this->f15);
		return L_0;
	}
}
extern "C" void m28 (t6 * __this, t3* p0, const MethodInfo* method)
{
	{
		t3* L_0 = p0;
		__this->f15 = L_0;
		return;
	}
}
extern "C" t11 * m29 (t6 * __this, const MethodInfo* method)
{
	{
		t11 * L_0 = (__this->f16);
		return L_0;
	}
}
extern "C" void m30 (t6 * __this, t11 * p0, const MethodInfo* method)
{
	{
		t11 * L_0 = p0;
		__this->f16 = L_0;
		return;
	}
}
extern "C" t3* m31 (t6 * __this, const MethodInfo* method)
{
	t3* G_B3_0 = {0};
	{
		t11 * L_0 = m29(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t11 * L_1 = m29(__this, NULL);
		t3* L_2 = m83(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = ((t3*)(NULL));
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern TypeInfo* t11_TI_var;
extern "C" void m32 (t6 * __this, t3* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t11_TI_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		t11 * L_0 = m29(__this, NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t11 * L_1 = (t11 *)il2cpp_codegen_object_new (t11_TI_var);
		m73(L_1, NULL);
		m30(__this, L_1, NULL);
	}

IL_0016:
	{
		t11 * L_2 = m29(__this, NULL);
		t3* L_3 = p0;
		m84(L_2, L_3, NULL);
		return;
	}
}
extern TypeInfo* t3_TI_var;
extern TypeInfo* t12_TI_var;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" bool m33 (t6 * __this, t3* p0, t3* p1, t11 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		t10 * L_0 = (__this->f6);
		m128(L_0, ((int32_t)3000), NULL);
		m22(__this, 0, NULL);
		t11 * L_1 = p2;
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		t11 * L_2 = p2;
		m30(__this, L_2, NULL);
		t11 * L_3 = m29(__this, NULL);
		t3* L_4 = m83(L_3, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		t11 * L_5 = m29(__this, NULL);
		t3* L_6 = m83(L_5, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_7 = ((t3_SFs*)t3_TI_var->static_fields)->f2;
		bool L_8 = m129(NULL, L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0061;
		}
	}

IL_004e:
	{
		t2 * L_9 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_9, 1, _stringLiteral8);
		return 0;
	}

IL_0061:
	{
		goto IL_0079;
	}

IL_0066:
	{
		t2 * L_10 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_10, 1, _stringLiteral9);
		return 0;
	}

IL_0079:
	{
		t3* L_11 = p0;
		m28(__this, L_11, NULL);
		t3* L_12 = p1;
		m26(__this, L_12, NULL);
		__this->f7 = 0;
		__this->f8 = ((int32_t)100);
		t10 * L_13 = (__this->f6);
		m130(L_13, 2, NULL);
		t10 * L_14 = (__this->f6);
		m131(L_14, 7, NULL);
		t9 * L_15 = (__this->f3);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::Clear() */, L_15);
		t9 * L_16 = (__this->f4);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::Clear() */, L_16);
		t10 * L_17 = (__this->f6);
		t3* L_18 = m68(L_17, NULL);
		m14(__this, L_18, NULL);
		t10 * L_19 = (__this->f6);
		bool L_20 = m71(L_19, NULL);
		V_0 = L_20;
		bool L_21 = V_0;
		if (!L_21)
		{
			goto IL_00ee;
		}
	}
	{
		m20(__this, 1, NULL);
	}

IL_00ee:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
extern "C" void m34 (t6 * __this, const MethodInfo* method)
{
	{
		bool L_0 = m24(__this, NULL);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_1 = m132(NULL, NULL);
		int32_t L_2 = (__this->f9);
		int32_t L_3 = (__this->f8);
		if ((((int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2))) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = (__this->f9);
		if (L_4)
		{
			goto IL_0043;
		}
	}

IL_002d:
	{
		int32_t L_5 = m132(NULL, NULL);
		__this->f9 = L_5;
		t10 * L_6 = (__this->f6);
		VirtActionInvoker0::Invoke(10 /* System.Void ExitGames.Client.Photon.PhotonPeer::Service() */, L_6);
	}

IL_0043:
	{
		return;
	}
}
extern "C" void m35 (t6 * __this, const MethodInfo* method)
{
	{
		bool L_0 = m24(__this, NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		t10 * L_1 = (__this->f6);
		uint8_t L_2 = m133(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		t10 * L_3 = (__this->f6);
		VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_3);
	}

IL_0026:
	{
		return;
	}
}
extern "C" void m36 (t6 * __this, const MethodInfo* method)
{
	{
		bool L_0 = m24(__this, NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t10 * L_1 = (__this->f6);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::StopThread() */, L_1);
	}

IL_0016:
	{
		return;
	}
}
extern "C" bool m37 (t6 * __this, t26* p0, const MethodInfo* method)
{
	{
		t26* L_0 = p0;
		bool L_1 = m38(__this, L_0, 0, NULL);
		return L_1;
	}
}
extern TypeInfo* t12_TI_var;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral11;
extern "C" bool m38 (t6 * __this, t26* p0, int32_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = m23(__this, NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t2 * L_1 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_1, 1, _stringLiteral10);
		return 0;
	}

IL_001e:
	{
		t26* L_2 = p0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		t26* L_3 = p0;
		if ((((int32_t)((int32_t)(((t36 *)L_3)->max_length)))))
		{
			goto IL_003f;
		}
	}

IL_002c:
	{
		t2 * L_4 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_4, 2, _stringLiteral11);
		return 0;
	}

IL_003f:
	{
		t26* L_5 = p0;
		int32_t L_6 = p1;
		bool L_7 = m54(__this, L_5, 0, L_6, NULL);
		return L_7;
	}
}
extern TypeInfo* t12_TI_var;
extern Il2CppCodeGenString* _stringLiteral12;
extern Il2CppCodeGenString* _stringLiteral13;
extern "C" bool m39 (t6 * __this, t26* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = m23(__this, NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t2 * L_1 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_1, 1, _stringLiteral12);
		return 0;
	}

IL_001e:
	{
		t26* L_2 = p0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		t26* L_3 = p0;
		if ((((int32_t)((int32_t)(((t36 *)L_3)->max_length)))))
		{
			goto IL_003f;
		}
	}

IL_002c:
	{
		t2 * L_4 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_4, 2, _stringLiteral13);
		return 0;
	}

IL_003f:
	{
		t26* L_5 = p0;
		bool L_6 = m54(__this, L_5, 1, 0, NULL);
		return L_6;
	}
}
extern TypeInfo* t12_TI_var;
extern TypeInfo* t3_TI_var;
extern TypeInfo* t46_TI_var;
extern const MethodInfo* m135_MI_var;
extern Il2CppCodeGenString* _stringLiteral14;
extern Il2CppCodeGenString* _stringLiteral15;
extern "C" bool m40 (t6 * __this, t3* p0, t2 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t46_TI_var = il2cpp_codegen_type_info_from_index(14);
		m135_MI_var = il2cpp_codegen_method_info_from_index(2147483654);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t46 * V_0 = {0};
	t46 * V_1 = {0};
	{
		bool L_0 = m23(__this, NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t2 * L_1 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_1, 1, _stringLiteral14);
		return 0;
	}

IL_001e:
	{
		t3* L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		bool L_3 = m134(NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		t2 * L_4 = p1;
		if (L_4)
		{
			goto IL_0042;
		}
	}

IL_002f:
	{
		t2 * L_5 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_5, 2, _stringLiteral15);
		return 0;
	}

IL_0042:
	{
		t46 * L_6 = (t46 *)il2cpp_codegen_object_new (t46_TI_var);
		m135(L_6, m135_MI_var);
		V_1 = L_6;
		t46 * L_7 = V_1;
		t3* L_8 = p0;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_7, 1, L_8);
		t46 * L_9 = V_1;
		t2 * L_10 = p1;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_9, 3, L_10);
		t46 * L_11 = V_1;
		V_0 = L_11;
		t10 * L_12 = (__this->f6);
		t46 * L_13 = V_0;
		bool L_14 = (bool)VirtFuncInvoker3< bool, uint8_t, t46 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_12, 2, L_13, 1);
		return L_14;
	}
}
extern "C" bool m41 (t6 * __this, t3* p0, t2 * p1, const MethodInfo* method)
{
	{
		t3* L_0 = p0;
		t2 * L_1 = p1;
		bool L_2 = m42(__this, L_0, L_1, 0, NULL);
		return L_2;
	}
}
extern TypeInfo* t12_TI_var;
extern TypeInfo* t3_TI_var;
extern TypeInfo* t46_TI_var;
extern const MethodInfo* m135_MI_var;
extern Il2CppCodeGenString* _stringLiteral16;
extern Il2CppCodeGenString* _stringLiteral17;
extern "C" bool m42 (t6 * __this, t3* p0, t2 * p1, bool p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t46_TI_var = il2cpp_codegen_type_info_from_index(14);
		m135_MI_var = il2cpp_codegen_method_info_from_index(2147483654);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	t46 * V_0 = {0};
	bool V_1 = false;
	t46 * V_2 = {0};
	{
		bool L_0 = m23(__this, NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t2 * L_1 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_1, 1, _stringLiteral16);
		return 0;
	}

IL_001e:
	{
		t3* L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		bool L_3 = m134(NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		t2 * L_4 = p1;
		if (L_4)
		{
			goto IL_0042;
		}
	}

IL_002f:
	{
		t2 * L_5 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_5, 2, _stringLiteral17);
		return 0;
	}

IL_0042:
	{
		t46 * L_6 = (t46 *)il2cpp_codegen_object_new (t46_TI_var);
		m135(L_6, m135_MI_var);
		V_2 = L_6;
		t46 * L_7 = V_2;
		t3* L_8 = p0;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_7, ((int32_t)225), L_8);
		t46 * L_9 = V_2;
		t2 * L_10 = p1;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_9, 3, L_10);
		t46 * L_11 = V_2;
		V_0 = L_11;
		t10 * L_12 = (__this->f6);
		t46 * L_13 = V_0;
		bool L_14 = p2;
		bool L_15 = (bool)VirtFuncInvoker5< bool, uint8_t, t46 *, bool, uint8_t, bool >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean) */, L_12, 3, L_13, 1, 0, L_14);
		V_1 = L_15;
		bool L_16 = V_1;
		return L_16;
	}
}
extern TypeInfo* t12_TI_var;
extern TypeInfo* t46_TI_var;
extern TypeInfo* t39_TI_var;
extern TypeInfo* t38_TI_var;
extern const MethodInfo* m135_MI_var;
extern Il2CppCodeGenString* _stringLiteral18;
extern "C" bool m43 (t6 * __this, int32_t p0, t2 * p1, bool p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		t46_TI_var = il2cpp_codegen_type_info_from_index(14);
		t39_TI_var = il2cpp_codegen_type_info_from_index(15);
		t38_TI_var = il2cpp_codegen_type_info_from_index(16);
		m135_MI_var = il2cpp_codegen_method_info_from_index(2147483654);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	t46 * V_0 = {0};
	t46 * V_1 = {0};
	{
		bool L_0 = m23(__this, NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t2 * L_1 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_1, 1, _stringLiteral18);
		return 0;
	}

IL_001e:
	{
		t46 * L_2 = (t46 *)il2cpp_codegen_object_new (t46_TI_var);
		m135(L_2, m135_MI_var);
		V_1 = L_2;
		t46 * L_3 = V_1;
		int32_t L_4 = p0;
		int32_t L_5 = L_4;
		t2 * L_6 = Box(t39_TI_var, &L_5);
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_3, ((int32_t)10), L_6);
		t46 * L_7 = V_1;
		V_0 = L_7;
		bool L_8 = p2;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		t46 * L_9 = V_0;
		bool L_10 = 1;
		t2 * L_11 = Box(t38_TI_var, &L_10);
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_9, ((int32_t)12), L_11);
		goto IL_0055;
	}

IL_004d:
	{
		t46 * L_12 = V_0;
		t2 * L_13 = p1;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_12, 3, L_13);
	}

IL_0055:
	{
		t10 * L_14 = (__this->f6);
		t46 * L_15 = V_0;
		bool L_16 = (bool)VirtFuncInvoker3< bool, uint8_t, t46 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_14, 5, L_15, 1);
		return L_16;
	}
}
extern "C" bool m44 (t6 * __this, int32_t p0, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = m43(__this, L_0, NULL, 1, NULL);
		return L_1;
	}
}
extern "C" bool m45 (t6 * __this, int32_t p0, t2 * p1, const MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t2 * L_1 = p1;
		bool L_2 = m43(__this, L_0, L_1, 0, NULL);
		return L_2;
	}
}
extern TypeInfo* t12_TI_var;
extern TypeInfo* t27_TI_var;
extern TypeInfo* t39_TI_var;
extern TypeInfo* t3_TI_var;
extern TypeInfo* t46_TI_var;
extern const MethodInfo* m135_MI_var;
extern Il2CppCodeGenString* _stringLiteral19;
extern Il2CppCodeGenString* _stringLiteral20;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" bool m46 (t6 * __this, t26* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		t27_TI_var = il2cpp_codegen_type_info_from_index(17);
		t39_TI_var = il2cpp_codegen_type_info_from_index(15);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t46_TI_var = il2cpp_codegen_type_info_from_index(14);
		m135_MI_var = il2cpp_codegen_method_info_from_index(2147483654);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	t46 * V_0 = {0};
	t46 * V_1 = {0};
	{
		bool L_0 = m23(__this, NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t2 * L_1 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_1, 1, _stringLiteral19);
		return 0;
	}

IL_001e:
	{
		t26* L_2 = p0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		t26* L_3 = p0;
		if ((((int32_t)((int32_t)(((t36 *)L_3)->max_length)))))
		{
			goto IL_003f;
		}
	}

IL_002c:
	{
		t2 * L_4 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_4, 2, _stringLiteral20);
		return 0;
	}

IL_003f:
	{
		t26* L_5 = p0;
		if ((((int32_t)(((int32_t)((int32_t)(((t36 *)L_5)->max_length))))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_008d;
		}
	}
	{
		t2 * L_6 = (__this->f5);
		t27* L_7 = ((t27*)SZArrayNew(t27_TI_var, 4));
		ArrayElementTypeCheck (L_7, _stringLiteral21);
		*((t2 **)(t2 **)SZArrayLdElema(L_7, 0, sizeof(t2 *))) = (t2 *)_stringLiteral21;
		t27* L_8 = L_7;
		t26* L_9 = p0;
		int32_t L_10 = (((int32_t)((int32_t)(((t36 *)L_9)->max_length))));
		t2 * L_11 = Box(t39_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t2 **)(t2 **)SZArrayLdElema(L_8, 1, sizeof(t2 *))) = (t2 *)L_11;
		t27* L_12 = L_8;
		ArrayElementTypeCheck (L_12, _stringLiteral22);
		*((t2 **)(t2 **)SZArrayLdElema(L_12, 2, sizeof(t2 *))) = (t2 *)_stringLiteral22;
		t27* L_13 = L_12;
		int32_t L_14 = ((int32_t)1024);
		t2 * L_15 = Box(t39_TI_var, &L_14);
		ArrayElementTypeCheck (L_13, L_15);
		*((t2 **)(t2 **)SZArrayLdElema(L_13, 3, sizeof(t2 *))) = (t2 *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_16 = m136(NULL, L_13, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_6, 2, L_16);
		return 0;
	}

IL_008d:
	{
		t46 * L_17 = (t46 *)il2cpp_codegen_object_new (t46_TI_var);
		m135(L_17, m135_MI_var);
		V_1 = L_17;
		t46 * L_18 = V_1;
		t26* L_19 = p0;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_18, ((int32_t)11), (t2 *)(t2 *)L_19);
		t46 * L_20 = V_1;
		V_0 = L_20;
		t10 * L_21 = (__this->f6);
		t46 * L_22 = V_0;
		bool L_23 = (bool)VirtFuncInvoker3< bool, uint8_t, t46 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_21, 6, L_22, 1);
		return L_23;
	}
}
extern TypeInfo* t12_TI_var;
extern TypeInfo* t27_TI_var;
extern TypeInfo* t39_TI_var;
extern TypeInfo* t3_TI_var;
extern TypeInfo* t46_TI_var;
extern const MethodInfo* m135_MI_var;
extern Il2CppCodeGenString* _stringLiteral23;
extern Il2CppCodeGenString* _stringLiteral24;
extern Il2CppCodeGenString* _stringLiteral25;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" bool m47 (t6 * __this, t26* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		t27_TI_var = il2cpp_codegen_type_info_from_index(17);
		t39_TI_var = il2cpp_codegen_type_info_from_index(15);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t46_TI_var = il2cpp_codegen_type_info_from_index(14);
		m135_MI_var = il2cpp_codegen_method_info_from_index(2147483654);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	t46 * V_0 = {0};
	t46 * V_1 = {0};
	{
		bool L_0 = m23(__this, NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t2 * L_1 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_1, 1, _stringLiteral23);
		return 0;
	}

IL_001e:
	{
		t26* L_2 = p0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		t26* L_3 = p0;
		if ((((int32_t)((int32_t)(((t36 *)L_3)->max_length)))))
		{
			goto IL_003f;
		}
	}

IL_002c:
	{
		t2 * L_4 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_4, 2, _stringLiteral24);
		return 0;
	}

IL_003f:
	{
		t26* L_5 = p0;
		if ((((int32_t)(((int32_t)((int32_t)(((t36 *)L_5)->max_length))))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_008d;
		}
	}
	{
		t2 * L_6 = (__this->f5);
		t27* L_7 = ((t27*)SZArrayNew(t27_TI_var, 4));
		ArrayElementTypeCheck (L_7, _stringLiteral25);
		*((t2 **)(t2 **)SZArrayLdElema(L_7, 0, sizeof(t2 *))) = (t2 *)_stringLiteral25;
		t27* L_8 = L_7;
		t26* L_9 = p0;
		int32_t L_10 = (((int32_t)((int32_t)(((t36 *)L_9)->max_length))));
		t2 * L_11 = Box(t39_TI_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t2 **)(t2 **)SZArrayLdElema(L_8, 1, sizeof(t2 *))) = (t2 *)L_11;
		t27* L_12 = L_8;
		ArrayElementTypeCheck (L_12, _stringLiteral22);
		*((t2 **)(t2 **)SZArrayLdElema(L_12, 2, sizeof(t2 *))) = (t2 *)_stringLiteral22;
		t27* L_13 = L_12;
		int32_t L_14 = ((int32_t)1024);
		t2 * L_15 = Box(t39_TI_var, &L_14);
		ArrayElementTypeCheck (L_13, L_15);
		*((t2 **)(t2 **)SZArrayLdElema(L_13, 3, sizeof(t2 *))) = (t2 *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_16 = m136(NULL, L_13, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_6, 2, L_16);
		return 0;
	}

IL_008d:
	{
		t46 * L_17 = (t46 *)il2cpp_codegen_object_new (t46_TI_var);
		m135(L_17, m135_MI_var);
		V_1 = L_17;
		t46 * L_18 = V_1;
		t26* L_19 = p0;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_18, ((int32_t)11), (t2 *)(t2 *)L_19);
		t46 * L_20 = V_1;
		V_0 = L_20;
		t10 * L_21 = (__this->f6);
		t46 * L_22 = V_0;
		bool L_23 = (bool)VirtFuncInvoker3< bool, uint8_t, t46 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_21, 7, L_22, 1);
		return L_23;
	}
}
extern TypeInfo* t3_TI_var;
extern Il2CppCodeGenString* _stringLiteral26;
extern "C" t3* m48 (t6 * __this, t3* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3* L_0 = m31(__this, NULL);
		t3* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_2 = m119(NULL, _stringLiteral26, L_0, L_1, NULL);
		return L_2;
	}
}
extern "C" bool m49 (t6 * __this, t3* p0, bool p1, t1 ** p2, const MethodInfo* method)
{
	{
		bool L_0 = p1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t9 * L_1 = (__this->f3);
		t3* L_2 = p0;
		t1 ** L_3 = p2;
		bool L_4 = (bool)VirtFuncInvoker2< bool, t3*, t1 ** >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::TryGetValue(!0,!1&) */, L_1, L_2, L_3);
		return L_4;
	}

IL_0014:
	{
		t9 * L_5 = (__this->f4);
		t3* L_6 = p0;
		t1 ** L_7 = p2;
		bool L_8 = (bool)VirtFuncInvoker2< bool, t3*, t1 ** >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::TryGetValue(!0,!1&) */, L_5, L_6, L_7);
		return L_8;
	}
}
extern "C" bool m50 (t6 * __this, t3* p0, t1 ** p1, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		t9 * L_0 = (__this->f3);
		t3* L_1 = p0;
		t1 ** L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker2< bool, t3*, t1 ** >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::TryGetValue(!0,!1&) */, L_0, L_1, L_2);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		t9 * L_5 = (__this->f4);
		t3* L_6 = p0;
		t1 ** L_7 = p1;
		bool L_8 = (bool)VirtFuncInvoker2< bool, t3*, t1 ** >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::TryGetValue(!0,!1&) */, L_5, L_6, L_7);
		V_0 = L_8;
		bool L_9 = V_0;
		return L_9;
	}
}
extern "C" void m51 (t6 * __this, const MethodInfo* method)
{
	{
		t10 * L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t10 * L_1 = (__this->f6);
		VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly() */, L_1);
	}

IL_0017:
	{
		return;
	}
}
extern "C" void m52 (t6 * __this, uint8_t p0, const MethodInfo* method)
{
	{
		t10 * L_0 = (__this->f6);
		uint8_t L_1 = p0;
		m137(L_0, L_1, NULL);
		return;
	}
}
extern "C" uint8_t m53 (t6 * __this, const MethodInfo* method)
{
	{
		t10 * L_0 = (__this->f6);
		uint8_t L_1 = m138(L_0, NULL);
		return L_1;
	}
}
extern TypeInfo* t46_TI_var;
extern TypeInfo* t39_TI_var;
extern const MethodInfo* m135_MI_var;
extern "C" bool m54 (t6 * __this, t26* p0, uint8_t p1, int32_t p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t46_TI_var = il2cpp_codegen_type_info_from_index(14);
		t39_TI_var = il2cpp_codegen_type_info_from_index(15);
		m135_MI_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	t46 * V_0 = {0};
	t46 * V_1 = {0};
	{
		t46 * L_0 = (t46 *)il2cpp_codegen_object_new (t46_TI_var);
		m135(L_0, m135_MI_var);
		V_1 = L_0;
		t46 * L_1 = V_1;
		t26* L_2 = p0;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_1, 0, (t2 *)(t2 *)L_2);
		t46 * L_3 = V_1;
		V_0 = L_3;
		int32_t L_4 = p2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		t46 * L_5 = V_0;
		int32_t L_6 = p2;
		int32_t L_7 = L_6;
		t2 * L_8 = Box(t39_TI_var, &L_7);
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_5, ((int32_t)14), L_8);
	}

IL_0024:
	{
		t10 * L_9 = (__this->f6);
		uint8_t L_10 = p1;
		t46 * L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker3< bool, uint8_t, t46 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_9, L_10, L_11, 1);
		return L_12;
	}
}
extern TypeInfo* t3_TI_var;
extern TypeInfo* t1_TI_var;
extern TypeInfo* t12_TI_var;
extern "C" void m55 (t6 * __this, t30 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t1_TI_var = il2cpp_codegen_type_info_from_index(5);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	t2 * V_0 = {0};
	t3* V_1 = {0};
	t3* V_2 = {0};
	t3* V_3 = {0};
	t1 * V_4 = {0};
	{
		t30 * L_0 = p0;
		t46 * L_1 = (L_0->f1);
		t2 * L_2 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_1, 3);
		V_0 = L_2;
		t30 * L_3 = p0;
		t46 * L_4 = (L_3->f1);
		t2 * L_5 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_4, 5);
		V_1 = ((t3*)CastclassSealed(L_5, t3_TI_var));
		t3* L_6 = m31(__this, NULL);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		t3* L_7 = m31(__this, NULL);
		t3* L_8 = V_1;
		bool L_9 = m139(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		t30 * L_10 = p0;
		t46 * L_11 = (L_10->f1);
		t2 * L_12 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_11, ((int32_t)225));
		V_3 = ((t3*)CastclassSealed(L_12, t3_TI_var));
		t3* L_13 = V_3;
		t3* L_14 = m48(__this, L_13, NULL);
		V_2 = L_14;
		goto IL_0066;
	}

IL_005e:
	{
		t3* L_15 = V_1;
		t3* L_16 = m48(__this, L_15, NULL);
		V_2 = L_16;
	}

IL_0066:
	{
		t9 * L_17 = (__this->f4);
		t3* L_18 = V_2;
		bool L_19 = (bool)VirtFuncInvoker2< bool, t3*, t1 ** >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::TryGetValue(!0,!1&) */, L_17, L_18, (&V_4));
		if (L_19)
		{
			goto IL_009d;
		}
	}
	{
		t3* L_20 = V_2;
		t1 * L_21 = (t1 *)il2cpp_codegen_object_new (t1_TI_var);
		m0(L_21, L_20, NULL);
		V_4 = L_21;
		t1 * L_22 = V_4;
		m2(L_22, 1, NULL);
		t9 * L_23 = (__this->f4);
		t1 * L_24 = V_4;
		t3* L_25 = (L_24->f0);
		t1 * L_26 = V_4;
		VirtActionInvoker2< t3*, t1 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::Add(!0,!1) */, L_23, L_25, L_26);
	}

IL_009d:
	{
		t1 * L_27 = V_4;
		t3* L_28 = V_1;
		t2 * L_29 = V_0;
		m4(L_27, L_28, L_29, NULL);
		t2 * L_30 = (__this->f5);
		t3* L_31 = V_1;
		t2 * L_32 = V_0;
		t3* L_33 = V_2;
		InterfaceActionInvoker3< t3*, t2 *, t3* >::Invoke(5 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnPrivateMessage(System.String,System.Object,System.String) */, t12_TI_var, L_30, L_31, L_32, L_33);
		return;
	}
}
extern TypeInfo* t27_TI_var;
extern TypeInfo* t26_TI_var;
extern TypeInfo* t3_TI_var;
extern TypeInfo* t12_TI_var;
extern Il2CppCodeGenString* _stringLiteral27;
extern Il2CppCodeGenString* _stringLiteral28;
extern "C" void m56 (t6 * __this, t30 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t27_TI_var = il2cpp_codegen_type_info_from_index(17);
		t26_TI_var = il2cpp_codegen_type_info_from_index(18);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	t27* V_0 = {0};
	t26* V_1 = {0};
	t3* V_2 = {0};
	t1 * V_3 = {0};
	{
		t30 * L_0 = p0;
		t46 * L_1 = (L_0->f1);
		t2 * L_2 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_1, 2);
		V_0 = ((t27*)Castclass(L_2, t27_TI_var));
		t30 * L_3 = p0;
		t46 * L_4 = (L_3->f1);
		t2 * L_5 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_4, 4);
		V_1 = ((t26*)Castclass(L_5, t26_TI_var));
		t30 * L_6 = p0;
		t46 * L_7 = (L_6->f1);
		t2 * L_8 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_7, 1);
		V_2 = ((t3*)CastclassSealed(L_8, t3_TI_var));
		t9 * L_9 = (__this->f3);
		t3* L_10 = V_2;
		bool L_11 = (bool)VirtFuncInvoker2< bool, t3*, t1 ** >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::TryGetValue(!0,!1&) */, L_9, L_10, (&V_3));
		if (L_11)
		{
			goto IL_0066;
		}
	}
	{
		t2 * L_12 = (__this->f5);
		t3* L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_14 = m140(NULL, _stringLiteral27, L_13, _stringLiteral28, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_12, 2, L_14);
		return;
	}

IL_0066:
	{
		t1 * L_15 = V_3;
		t26* L_16 = V_1;
		t27* L_17 = V_0;
		m5(L_15, L_16, L_17, NULL);
		t2 * L_18 = (__this->f5);
		t3* L_19 = V_2;
		t26* L_20 = V_1;
		t27* L_21 = V_0;
		InterfaceActionInvoker3< t3*, t26*, t27* >::Invoke(4 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnGetMessages(System.String,System.String[],System.Object[]) */, t12_TI_var, L_18, L_19, L_20, L_21);
		return;
	}
}
extern TypeInfo* t26_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1_TI_var;
extern TypeInfo* t12_TI_var;
extern "C" void m57 (t6 * __this, t30 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t26_TI_var = il2cpp_codegen_type_info_from_index(18);
		t47_TI_var = il2cpp_codegen_type_info_from_index(19);
		t1_TI_var = il2cpp_codegen_type_info_from_index(5);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	t26* V_0 = {0};
	t47* V_1 = {0};
	int32_t V_2 = 0;
	t3* V_3 = {0};
	t1 * V_4 = {0};
	{
		t30 * L_0 = p0;
		t46 * L_1 = (L_0->f1);
		t2 * L_2 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_1, 0);
		V_0 = ((t26*)Castclass(L_2, t26_TI_var));
		t30 * L_3 = p0;
		t46 * L_4 = (L_3->f1);
		t2 * L_5 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_4, ((int32_t)15));
		V_1 = ((t47*)Castclass(L_5, t47_TI_var));
		V_2 = 0;
		goto IL_0069;
	}

IL_002c:
	{
		t47* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		if (!(*(uint8_t*)(bool*)SZArrayLdElema(L_6, L_8, sizeof(bool))))
		{
			goto IL_0065;
		}
	}
	{
		t26* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		V_3 = (*(t3**)(t3**)SZArrayLdElema(L_9, L_11, sizeof(t3*)));
		t9 * L_12 = (__this->f3);
		t3* L_13 = V_3;
		bool L_14 = (bool)VirtFuncInvoker1< bool, t3* >::Invoke(29 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::ContainsKey(!0) */, L_12, L_13);
		if (L_14)
		{
			goto IL_0065;
		}
	}
	{
		t3* L_15 = V_3;
		t1 * L_16 = (t1 *)il2cpp_codegen_object_new (t1_TI_var);
		m0(L_16, L_15, NULL);
		V_4 = L_16;
		t9 * L_17 = (__this->f3);
		t1 * L_18 = V_4;
		t3* L_19 = (L_18->f0);
		t1 * L_20 = V_4;
		VirtActionInvoker2< t3*, t1 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::Add(!0,!1) */, L_17, L_19, L_20);
	}

IL_0065:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0069:
	{
		int32_t L_22 = V_2;
		t26* L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((t36 *)L_23)->max_length)))))))
		{
			goto IL_002c;
		}
	}
	{
		t2 * L_24 = (__this->f5);
		t26* L_25 = V_0;
		t47* L_26 = V_1;
		InterfaceActionInvoker2< t26*, t47* >::Invoke(6 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, t12_TI_var, L_24, L_25, L_26);
		return;
	}
}
extern TypeInfo* t26_TI_var;
extern TypeInfo* t12_TI_var;
extern "C" void m58 (t6 * __this, t30 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t26_TI_var = il2cpp_codegen_type_info_from_index(18);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	t26* V_0 = {0};
	int32_t V_1 = 0;
	t3* V_2 = {0};
	{
		t30 * L_0 = p0;
		t2 * L_1 = m141(L_0, 0, NULL);
		V_0 = ((t26*)Castclass(L_1, t26_TI_var));
		V_1 = 0;
		goto IL_0029;
	}

IL_0014:
	{
		t26* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		V_2 = (*(t3**)(t3**)SZArrayLdElema(L_2, L_4, sizeof(t3*)));
		t9 * L_5 = (__this->f3);
		t3* L_6 = V_2;
		VirtFuncInvoker1< bool, t3* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::Remove(!0) */, L_5, L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		t26* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((t36 *)L_9)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		t2 * L_10 = (__this->f5);
		t26* L_11 = V_0;
		InterfaceActionInvoker1< t26* >::Invoke(7 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnUnsubscribed(System.String[]) */, t12_TI_var, L_10, L_11);
		return;
	}
}
extern TypeInfo* t3_TI_var;
extern TypeInfo* t12_TI_var;
extern TypeInfo* t11_TI_var;
extern TypeInfo* t43_TI_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral31;
extern Il2CppCodeGenString* _stringLiteral32;
extern "C" void m59 (t6 * __this, t31 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		t11_TI_var = il2cpp_codegen_type_info_from_index(13);
		t43_TI_var = il2cpp_codegen_type_info_from_index(10);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	int16_t V_0 = 0;
	{
		t2 * L_0 = (__this->f5);
		t31 * L_1 = p0;
		t3* L_2 = m142(L_1, NULL);
		t10 * L_3 = (__this->f6);
		t3* L_4 = m68(L_3, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_5 = m140(NULL, L_2, _stringLiteral29, L_4, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_0, 3, L_5);
		t31 * L_6 = p0;
		int16_t L_7 = (L_6->f1);
		if (L_7)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_8 = m19(__this, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_00d8;
		}
	}
	{
		m20(__this, 4, NULL);
		t2 * L_9 = (__this->f5);
		int32_t L_10 = m19(__this, NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState) */, t12_TI_var, L_9, L_10);
		t31 * L_11 = p0;
		t46 * L_12 = (L_11->f3);
		bool L_13 = (bool)VirtFuncInvoker1< bool, uint8_t >::Invoke(29 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0) */, L_12, ((int32_t)221));
		if (!L_13)
		{
			goto IL_00c2;
		}
	}
	{
		t11 * L_14 = m29(__this, NULL);
		if (L_14)
		{
			goto IL_0081;
		}
	}
	{
		t11 * L_15 = (t11 *)il2cpp_codegen_object_new (t11_TI_var);
		m73(L_15, NULL);
		m30(__this, L_15, NULL);
	}

IL_0081:
	{
		t11 * L_16 = m29(__this, NULL);
		t31 * L_17 = p0;
		t2 * L_18 = m143(L_17, ((int32_t)221), NULL);
		m82(L_16, ((t3*)IsInstSealed(L_18, t3_TI_var)), NULL);
		t31 * L_19 = p0;
		t2 * L_20 = m143(L_19, ((int32_t)230), NULL);
		m16(__this, ((t3*)CastclassSealed(L_20, t3_TI_var)), NULL);
		t10 * L_21 = (__this->f6);
		VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_21);
		goto IL_00d3;
	}

IL_00c2:
	{
		t2 * L_22 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_22, 1, _stringLiteral30);
	}

IL_00d3:
	{
		goto IL_0115;
	}

IL_00d8:
	{
		int32_t L_23 = m19(__this, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)6))))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_24 = (__this->f8);
		__this->f8 = ((int32_t)((int32_t)L_24*(int32_t)4));
		m20(__this, 7, NULL);
		t2 * L_25 = (__this->f5);
		int32_t L_26 = m19(__this, NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState) */, t12_TI_var, L_25, L_26);
		t2 * L_27 = (__this->f5);
		InterfaceActionInvoker0::Invoke(2 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnConnected() */, t12_TI_var, L_27);
	}

IL_0115:
	{
		goto IL_01c8;
	}

IL_011a:
	{
		t31 * L_28 = p0;
		int16_t L_29 = (L_28->f1);
		V_0 = L_29;
		int16_t L_30 = V_0;
		if (((int32_t)((int32_t)L_30-(int32_t)((int32_t)32755))) == 0)
		{
			goto IL_015d;
		}
		if (((int32_t)((int32_t)L_30-(int32_t)((int32_t)32755))) == 1)
		{
			goto IL_016a;
		}
		if (((int32_t)((int32_t)L_30-(int32_t)((int32_t)32755))) == 2)
		{
			goto IL_0176;
		}
	}
	{
		int16_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0182;
		}
	}
	{
		int16_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)32767))))
		{
			goto IL_0151;
		}
	}
	{
		goto IL_018f;
	}

IL_0151:
	{
		m22(__this, 6, NULL);
		goto IL_018f;
	}

IL_015d:
	{
		m22(__this, ((int32_t)10), NULL);
		goto IL_018f;
	}

IL_016a:
	{
		m22(__this, 8, NULL);
		goto IL_018f;
	}

IL_0176:
	{
		m22(__this, 7, NULL);
		goto IL_018f;
	}

IL_0182:
	{
		m22(__this, ((int32_t)9), NULL);
		goto IL_018f;
	}

IL_018f:
	{
		t2 * L_33 = (__this->f5);
		t31 * L_34 = p0;
		int16_t L_35 = (L_34->f1);
		int16_t L_36 = L_35;
		t2 * L_37 = Box(t43_TI_var, &L_36);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_38 = m144(NULL, _stringLiteral31, L_37, _stringLiteral32, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_33, 1, L_38);
		m20(__this, ((int32_t)10), NULL);
		t10 * L_39 = (__this->f6);
		VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_39);
	}

IL_01c8:
	{
		return;
	}
}
extern TypeInfo* t3_TI_var;
extern TypeInfo* t39_TI_var;
extern TypeInfo* t12_TI_var;
extern "C" void m60 (t6 * __this, t30 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t39_TI_var = il2cpp_codegen_type_info_from_index(15);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	t3* V_0 = {0};
	int32_t V_1 = 0;
	t2 * V_2 = {0};
	bool V_3 = false;
	{
		t30 * L_0 = p0;
		t46 * L_1 = (L_0->f1);
		t2 * L_2 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_1, 5);
		V_0 = ((t3*)CastclassSealed(L_2, t3_TI_var));
		t30 * L_3 = p0;
		t46 * L_4 = (L_3->f1);
		t2 * L_5 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_4, ((int32_t)10));
		V_1 = ((*(int32_t*)((int32_t*)UnBox (L_5, t39_TI_var))));
		V_2 = NULL;
		t30 * L_6 = p0;
		t46 * L_7 = (L_6->f1);
		bool L_8 = (bool)VirtFuncInvoker1< bool, uint8_t >::Invoke(29 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0) */, L_7, 3);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		t30 * L_10 = p0;
		t46 * L_11 = (L_10->f1);
		t2 * L_12 = (t2 *)VirtFuncInvoker1< t2 *, uint8_t >::Invoke(26 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_11, 3);
		V_2 = L_12;
	}

IL_0047:
	{
		t2 * L_13 = (__this->f5);
		t3* L_14 = V_0;
		int32_t L_15 = V_1;
		bool L_16 = V_3;
		t2 * L_17 = V_2;
		InterfaceActionInvoker4< t3*, int32_t, bool, t2 * >::Invoke(8 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object) */, t12_TI_var, L_13, L_14, L_15, L_16, L_17);
		return;
	}
}
extern TypeInfo* t3_TI_var;
extern TypeInfo* t12_TI_var;
extern Il2CppCodeGenString* _stringLiteral33;
extern Il2CppCodeGenString* _stringLiteral34;
extern "C" void m61 (t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		_stringLiteral34 = il2cpp_codegen_string_literal_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	{
		m20(__this, 6, NULL);
		t2 * L_0 = (__this->f5);
		t3* L_1 = m15(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_2 = m145(NULL, _stringLiteral33, L_1, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_0, 3, L_2);
		t10 * L_3 = (__this->f6);
		t3* L_4 = m15(__this, NULL);
		VirtFuncInvoker2< bool, t3*, t3* >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String) */, L_3, L_4, _stringLiteral34);
		return;
	}
}
extern TypeInfo* t3_TI_var;
extern TypeInfo* t12_TI_var;
extern TypeInfo* t46_TI_var;
extern const MethodInfo* m135_MI_var;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral36;
extern "C" bool m62 (t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t12_TI_var = il2cpp_codegen_type_info_from_index(8);
		t46_TI_var = il2cpp_codegen_type_info_from_index(14);
		m135_MI_var = il2cpp_codegen_method_info_from_index(2147483654);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral36 = il2cpp_codegen_string_literal_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	t46 * V_0 = {0};
	t46 * V_1 = {0};
	{
		t11 * L_0 = m29(__this, NULL);
		if (!L_0)
		{
			goto IL_0079;
		}
	}
	{
		t11 * L_1 = m29(__this, NULL);
		t3* L_2 = m81(L_1, NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		t11 * L_3 = m29(__this, NULL);
		t3* L_4 = m81(L_3, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_5 = ((t3_SFs*)t3_TI_var->static_fields)->f2;
		bool L_6 = m129(NULL, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}

IL_0035:
	{
		t2 * L_7 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_7, 1, _stringLiteral35);
		return 0;
	}

IL_0048:
	{
		t46 * L_8 = (t46 *)il2cpp_codegen_object_new (t46_TI_var);
		m135(L_8, m135_MI_var);
		V_1 = L_8;
		t46 * L_9 = V_1;
		t11 * L_10 = m29(__this, NULL);
		t3* L_11 = m81(L_10, NULL);
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_9, ((int32_t)221), L_11);
		t46 * L_12 = V_1;
		V_0 = L_12;
		t10 * L_13 = (__this->f6);
		t46 * L_14 = V_0;
		bool L_15 = (bool)VirtFuncInvoker3< bool, uint8_t, t46 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_13, ((int32_t)230), L_14, 1);
		return L_15;
	}

IL_0079:
	{
		t2 * L_16 = (__this->f5);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t12_TI_var, L_16, 1, _stringLiteral36);
		return 0;
	}
}
extern "C" void m63 (t14 * __this, const MethodInfo* method)
{
	{
		m115(__this, NULL);
		return;
	}
}
extern "C" void m64 (t15 * __this, const MethodInfo* method)
{
	{
		m115(__this, NULL);
		return;
	}
}
extern "C" void m65 (t16 * __this, const MethodInfo* method)
{
	{
		m115(__this, NULL);
		return;
	}
}
extern TypeInfo* t48_TI_var;
extern Il2CppCodeGenString* _stringLiteral37;
extern Il2CppCodeGenString* _stringLiteral38;
extern "C" void m66 (t10 * __this, t2 * p0, uint8_t p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t48_TI_var = il2cpp_codegen_type_info_from_index(20);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	t48 * V_0 = {0};
	{
		t2 * L_0 = p0;
		uint8_t L_1 = p1;
		m146(__this, L_0, L_1, NULL);
		uint8_t L_2 = p1;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0016;
		}
	}
	{
		uint8_t L_3 = p1;
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0030;
		}
	}

IL_0016:
	{
		m122(NULL, _stringLiteral37, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t48_TI_var);
		t48 * L_4 = il2cpp_codegen_get_type((methodPointerType)&m147, _stringLiteral38, "Assembly-CSharp-firstpass, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		m148(__this, L_4, NULL);
	}

IL_0030:
	{
		return;
	}
}
extern TypeInfo* t18_TI_var;
extern TypeInfo* t10_TI_var;
extern const MethodInfo* m149_MI_var;
extern "C" void m67 (t2 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t18_TI_var = il2cpp_codegen_type_info_from_index(22);
		t10_TI_var = il2cpp_codegen_type_info_from_index(6);
		m149_MI_var = il2cpp_codegen_method_info_from_index(2147483655);
		s_Il2CppMethodIntialized = true;
	}
	t18 * V_0 = {0};
	{
		t18 * L_0 = (t18 *)il2cpp_codegen_object_new (t18_TI_var);
		m149(L_0, m149_MI_var);
		V_0 = L_0;
		t18 * L_1 = V_0;
		VirtActionInvoker2< uint8_t, int32_t >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1) */, L_1, 0, ((int32_t)5058));
		t18 * L_2 = V_0;
		VirtActionInvoker2< uint8_t, int32_t >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1) */, L_2, 1, ((int32_t)4533));
		t18 * L_3 = V_0;
		VirtActionInvoker2< uint8_t, int32_t >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1) */, L_3, 4, ((int32_t)9093));
		t18 * L_4 = V_0;
		VirtActionInvoker2< uint8_t, int32_t >::Invoke(28 /* System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1) */, L_4, 5, ((int32_t)19093));
		t18 * L_5 = V_0;
		((t10_SFs*)t10_TI_var->static_fields)->f7 = L_5;
		return;
	}
}
extern "C" t3* m68 (t10 * __this, const MethodInfo* method)
{
	{
		t3* L_0 = m70(__this, NULL);
		return L_0;
	}
}
extern "C" bool m69 (t10 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = m150(__this, NULL);
		return ((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
extern TypeInfo* t10_TI_var;
extern TypeInfo* t3_TI_var;
extern TypeInfo* t39_TI_var;
extern Il2CppCodeGenString* _stringLiteral39;
extern Il2CppCodeGenString* _stringLiteral40;
extern Il2CppCodeGenString* _stringLiteral41;
extern Il2CppCodeGenString* _stringLiteral42;
extern "C" t3* m70 (t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t10_TI_var = il2cpp_codegen_type_info_from_index(6);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t39_TI_var = il2cpp_codegen_type_info_from_index(15);
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		_stringLiteral40 = il2cpp_codegen_string_literal_from_index(40);
		_stringLiteral41 = il2cpp_codegen_string_literal_from_index(41);
		_stringLiteral42 = il2cpp_codegen_string_literal_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = {0};
	int32_t V_1 = 0;
	t3* V_2 = {0};
	{
		uint8_t L_0 = m150(__this, NULL);
		V_0 = L_0;
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(t10_TI_var);
		t18 * L_1 = ((t10_SFs*)t10_TI_var->static_fields)->f7;
		uint8_t L_2 = V_0;
		VirtFuncInvoker2< bool, uint8_t, int32_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::TryGetValue(!0,!1&) */, L_1, L_2, (&V_1));
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_3 = ((t3_SFs*)t3_TI_var->static_fields)->f2;
		V_2 = L_3;
		uint8_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_002f;
		}
	}
	{
		V_2 = _stringLiteral39;
		goto IL_003c;
	}

IL_002f:
	{
		uint8_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)5))))
		{
			goto IL_003c;
		}
	}
	{
		V_2 = _stringLiteral40;
	}

IL_003c:
	{
		t3* L_6 = V_2;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		t2 * L_9 = Box(t39_TI_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_10 = m125(NULL, _stringLiteral41, L_6, _stringLiteral42, L_9, NULL);
		return L_10;
	}
}
extern TypeInfo* t3_TI_var;
extern TypeInfo* t33_TI_var;
extern Il2CppCodeGenString* _stringLiteral43;
extern Il2CppCodeGenString* _stringLiteral44;
extern "C" bool m71 (t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t33_TI_var = il2cpp_codegen_type_info_from_index(12);
		_stringLiteral43 = il2cpp_codegen_string_literal_from_index(43);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	{
		t2 * L_0 = m151(__this, NULL);
		t3* L_1 = m68(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_2 = m145(NULL, _stringLiteral43, L_1, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t33_TI_var, L_0, 3, L_2);
		t3* L_3 = m68(__this, NULL);
		bool L_4 = (bool)VirtFuncInvoker2< bool, t3*, t3* >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String) */, __this, L_3, _stringLiteral44);
		return L_4;
	}
}
extern TypeInfo* t33_TI_var;
extern TypeInfo* t46_TI_var;
extern TypeInfo* t3_TI_var;
extern TypeInfo* t42_TI_var;
extern const MethodInfo* m135_MI_var;
extern Il2CppCodeGenString* _stringLiteral45;
extern "C" bool m72 (t10 * __this, t3* p0, t3* p1, t3* p2, t11 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t33_TI_var = il2cpp_codegen_type_info_from_index(12);
		t46_TI_var = il2cpp_codegen_type_info_from_index(14);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t42_TI_var = il2cpp_codegen_type_info_from_index(9);
		m135_MI_var = il2cpp_codegen_method_info_from_index(2147483654);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	t46 * V_0 = {0};
	{
		uint8_t L_0 = m138(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_001d;
		}
	}
	{
		t2 * L_1 = m151(__this, NULL);
		InterfaceActionInvoker2< uint8_t, t3* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, t33_TI_var, L_1, 3, _stringLiteral45);
	}

IL_001d:
	{
		t46 * L_2 = (t46 *)il2cpp_codegen_object_new (t46_TI_var);
		m135(L_2, m135_MI_var);
		V_0 = L_2;
		t46 * L_3 = V_0;
		t3* L_4 = p1;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_3, ((int32_t)220), L_4);
		t46 * L_5 = V_0;
		t3* L_6 = p0;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_5, ((int32_t)224), L_6);
		t46 * L_7 = V_0;
		t3* L_8 = p2;
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_7, ((int32_t)210), L_8);
		t11 * L_9 = p3;
		if (!L_9)
		{
			goto IL_0109;
		}
	}
	{
		t11 * L_10 = p3;
		t3* L_11 = m83(L_10, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		bool L_12 = m134(NULL, L_11, NULL);
		if (L_12)
		{
			goto IL_0071;
		}
	}
	{
		t46 * L_13 = V_0;
		t11 * L_14 = p3;
		t3* L_15 = m83(L_14, NULL);
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_13, ((int32_t)225), L_15);
	}

IL_0071:
	{
		t11 * L_16 = p3;
		if (!L_16)
		{
			goto IL_0109;
		}
	}
	{
		t11 * L_17 = p3;
		uint8_t L_18 = m75(L_17, NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)255))))
		{
			goto IL_0109;
		}
	}
	{
		t46 * L_19 = V_0;
		t11 * L_20 = p3;
		uint8_t L_21 = m75(L_20, NULL);
		uint8_t L_22 = L_21;
		t2 * L_23 = Box(t42_TI_var, &L_22);
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_19, ((int32_t)217), L_23);
		t11 * L_24 = p3;
		t3* L_25 = m81(L_24, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		bool L_26 = m134(NULL, L_25, NULL);
		if (L_26)
		{
			goto IL_00c8;
		}
	}
	{
		t46 * L_27 = V_0;
		t11 * L_28 = p3;
		t3* L_29 = m81(L_28, NULL);
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_27, ((int32_t)221), L_29);
		goto IL_0109;
	}

IL_00c8:
	{
		t11 * L_30 = p3;
		t3* L_31 = m77(L_30, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		bool L_32 = m134(NULL, L_31, NULL);
		if (L_32)
		{
			goto IL_00eb;
		}
	}
	{
		t46 * L_33 = V_0;
		t11 * L_34 = p3;
		t3* L_35 = m77(L_34, NULL);
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_33, ((int32_t)216), L_35);
	}

IL_00eb:
	{
		t11 * L_36 = p3;
		t2 * L_37 = m79(L_36, NULL);
		if (!L_37)
		{
			goto IL_0109;
		}
	}
	{
		t46 * L_38 = V_0;
		t11 * L_39 = p3;
		t2 * L_40 = m79(L_39, NULL);
		VirtActionInvoker2< uint8_t, t2 * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_38, ((int32_t)214), L_40);
	}

IL_0109:
	{
		t46 * L_41 = V_0;
		bool L_42 = m152(__this, NULL);
		bool L_43 = (bool)VirtFuncInvoker5< bool, uint8_t, t46 *, bool, uint8_t, bool >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean) */, __this, ((int32_t)230), L_41, 1, 0, L_42);
		return L_43;
	}
}
extern "C" void m73 (t11 * __this, const MethodInfo* method)
{
	{
		__this->f0 = ((int32_t)255);
		m115(__this, NULL);
		return;
	}
}
extern "C" void m74 (t11 * __this, t3* p0, const MethodInfo* method)
{
	{
		__this->f0 = ((int32_t)255);
		m115(__this, NULL);
		t3* L_0 = p0;
		m84(__this, L_0, NULL);
		return;
	}
}
extern "C" uint8_t m75 (t11 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m76 (t11 * __this, uint8_t p0, const MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t3* m77 (t11 * __this, const MethodInfo* method)
{
	{
		t3* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m78 (t11 * __this, t3* p0, const MethodInfo* method)
{
	{
		t3* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t2 * m79 (t11 * __this, const MethodInfo* method)
{
	{
		t2 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m80 (t11 * __this, t2 * p0, const MethodInfo* method)
{
	{
		t2 * L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" t3* m81 (t11 * __this, const MethodInfo* method)
{
	{
		t3* L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m82 (t11 * __this, t3* p0, const MethodInfo* method)
{
	{
		t3* L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t3* m83 (t11 * __this, const MethodInfo* method)
{
	{
		t3* L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m84 (t11 * __this, t3* p0, const MethodInfo* method)
{
	{
		t3* L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern TypeInfo* t3_TI_var;
extern "C" void m85 (t11 * __this, t3* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	t11 * G_B2_0 = {0};
	t11 * G_B1_0 = {0};
	t3* G_B3_0 = {0};
	t11 * G_B3_1 = {0};
	{
		t3* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		bool L_1 = m134(NULL, L_0, NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((t3*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_0012:
	{
		t3* L_2 = p0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		m80(G_B3_1, G_B3_0, NULL);
		return;
	}
}
extern "C" void m86 (t11 * __this, t34* p0, const MethodInfo* method)
{
	{
		t34* L_0 = p0;
		m80(__this, (t2 *)(t2 *)L_0, NULL);
		return;
	}
}
extern TypeInfo* t3_TI_var;
extern TypeInfo* t27_TI_var;
extern TypeInfo* t25_TI_var;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral47;
extern "C" void m87 (t11 * __this, t3* p0, t3* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t27_TI_var = il2cpp_codegen_type_info_from_index(17);
		t25_TI_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		s_Il2CppMethodIntialized = true;
	}
	t3* V_0 = {0};
	t3* G_B3_0 = {0};
	{
		t3* L_0 = m77(__this, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		bool L_1 = m134(NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_2 = ((t3_SFs*)t3_TI_var->static_fields)->f2;
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = _stringLiteral46;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		t27* L_3 = ((t27*)SZArrayNew(t27_TI_var, 4));
		t3* L_4 = m77(__this, NULL);
		ArrayElementTypeCheck (L_3, L_4);
		*((t2 **)(t2 **)SZArrayLdElema(L_3, 0, sizeof(t2 *))) = (t2 *)L_4;
		t27* L_5 = L_3;
		t3* L_6 = V_0;
		ArrayElementTypeCheck (L_5, L_6);
		*((t2 **)(t2 **)SZArrayLdElema(L_5, 1, sizeof(t2 *))) = (t2 *)L_6;
		t27* L_7 = L_5;
		t3* L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t25_TI_var);
		t3* L_9 = m153(NULL, L_8, NULL);
		ArrayElementTypeCheck (L_7, L_9);
		*((t2 **)(t2 **)SZArrayLdElema(L_7, 2, sizeof(t2 *))) = (t2 *)L_9;
		t27* L_10 = L_7;
		t3* L_11 = p1;
		t3* L_12 = m153(NULL, L_11, NULL);
		ArrayElementTypeCheck (L_10, L_12);
		*((t2 **)(t2 **)SZArrayLdElema(L_10, 3, sizeof(t2 *))) = (t2 *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_13 = m154(NULL, _stringLiteral47, L_10, NULL);
		m78(__this, L_13, NULL);
		return;
	}
}
extern TypeInfo* t38_TI_var;
extern TypeInfo* t3_TI_var;
extern Il2CppCodeGenString* _stringLiteral48;
extern "C" t3* m88 (t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t38_TI_var = il2cpp_codegen_type_info_from_index(16);
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		_stringLiteral48 = il2cpp_codegen_string_literal_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	{
		t3* L_0 = m83(__this, NULL);
		t3* L_1 = m77(__this, NULL);
		t3* L_2 = m81(__this, NULL);
		bool L_3 = ((((int32_t)((((t2*)(t3*)L_2) == ((t2*)(t2 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t2 * L_4 = Box(t38_TI_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_5 = m125(NULL, _stringLiteral48, L_0, L_1, L_4, NULL);
		return L_5;
	}
}
extern "C" void m89 (t20 * __this, const MethodInfo* method)
{
	{
		m115(__this, NULL);
		return;
	}
}
extern "C" void m90 (t21 * __this, const MethodInfo* method)
{
	{
		m115(__this, NULL);
		return;
	}
}
extern "C" void m91 (t23 * __this, const MethodInfo* method)
{
	{
		m115(__this, NULL);
		return;
	}
}
extern "C" t2 * m92 (t23 * __this, const MethodInfo* method)
{
	{
		t2 * L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" t2 * m93 (t23 * __this, const MethodInfo* method)
{
	{
		t2 * L_0 = (__this->f1);
		return L_0;
	}
}
extern TypeInfo* t39_TI_var;
extern "C" bool m94 (t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t39_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->f0);
		V_0 = L_0;
		__this->f0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_005e;
		}
	}
	{
		goto IL_007a;
	}

IL_0021:
	{
		t24 * L_2 = (__this->f2);
		t24 * L_3 = (__this->f2);
		t25 * L_4 = (L_3->f0);
		t3* L_5 = (t3*)VirtFuncInvoker0< t3* >::Invoke(3 /* System.String System.Uri::ToString() */, L_4);
		int32_t L_6 = m100(NULL, L_5, NULL);
		L_2->f1 = L_6;
		goto IL_005e;
	}

IL_0046:
	{
		int32_t L_7 = 0;
		t2 * L_8 = Box(t39_TI_var, &L_7);
		__this->f1 = L_8;
		__this->f0 = 1;
		goto IL_007c;
	}

IL_005e:
	{
		t24 * L_9 = (__this->f2);
		int32_t L_10 = (L_9->f1);
		int32_t L_11 = m101(NULL, L_10, NULL);
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		__this->f0 = (-1);
	}

IL_007a:
	{
		return 0;
	}

IL_007c:
	{
		return 1;
	}
	// Dead block : IL_007e: ldloc.1
}
extern "C" void m95 (t23 * __this, const MethodInfo* method)
{
	{
		__this->f0 = (-1);
		return;
	}
}
extern TypeInfo* t50_TI_var;
extern "C" void m96 (t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t50_TI_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		t50 * L_0 = (t50 *)il2cpp_codegen_object_new (t50_TI_var);
		m155(L_0, NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
extern TypeInfo* t3_TI_var;
extern TypeInfo* t51_TI_var;
extern Il2CppCodeGenString* _stringLiteral49;
extern Il2CppCodeGenString* _stringLiteral50;
extern Il2CppCodeGenString* _stringLiteral51;
extern "C" void m97 (t24 * __this, t25 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t3_TI_var = il2cpp_codegen_type_info_from_index(1);
		t51_TI_var = il2cpp_codegen_type_info_from_index(25);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		_stringLiteral50 = il2cpp_codegen_string_literal_from_index(50);
		_stringLiteral51 = il2cpp_codegen_string_literal_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	t3* V_0 = {0};
	{
		m115(__this, NULL);
		t25 * L_0 = p0;
		__this->f0 = L_0;
		t25 * L_1 = (__this->f0);
		t3* L_2 = m156(L_1, NULL);
		V_0 = L_2;
		t3* L_3 = V_0;
		bool L_4 = m139(L_3, _stringLiteral49, NULL);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		t3* L_5 = V_0;
		bool L_6 = m139(L_5, _stringLiteral50, NULL);
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		t3* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t3_TI_var);
		t3* L_8 = m145(NULL, _stringLiteral51, L_7, NULL);
		t51 * L_9 = (t51 *)il2cpp_codegen_object_new (t51_TI_var);
		m157(L_9, L_8, NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_004a:
	{
		return;
	}
}
extern TypeInfo* t52_TI_var;
extern "C" void m98 (t24 * __this, t3* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t52_TI_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t52_TI_var);
		t52 * L_0 = m158(NULL, NULL);
		t3* L_1 = p0;
		t34* L_2 = (t34*)VirtFuncInvoker1< t34*, t3* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		m107(__this, L_2, NULL);
		return;
	}
}
extern TypeInfo* t52_TI_var;
extern "C" t3* m99 (t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t52_TI_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	t34* V_0 = {0};
	{
		t34* L_0 = m108(__this, NULL);
		V_0 = L_0;
		t34* L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (t3*)NULL;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t52_TI_var);
		t52 * L_2 = m158(NULL, NULL);
		t34* L_3 = V_0;
		t3* L_4 = (t3*)VirtFuncInvoker1< t3*, t34* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
extern "C" {int32_t DEFAULT_CALL SocketCreate(char*);}
extern "C" int32_t m100 (t2 * __this , t3* p0, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SocketCreate;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SocketCreate'"));
		}
	}

	// Marshaling of parameter 'p0' to native representation
	char* _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_string(p0);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation
	il2cpp_codegen_marshal_free(_p0_marshaled);
	_p0_marshaled = NULL;

	return _return_value;
}
extern "C" {int32_t DEFAULT_CALL SocketState(int32_t);}
extern "C" int32_t m101 (t2 * __this , int32_t p0, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SocketState;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SocketState'"));
		}
	}

	// Marshaling of parameter 'p0' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

	return _return_value;
}
extern "C" {void DEFAULT_CALL SocketSend(int32_t, uint8_t*, int32_t);}
extern "C" void m102 (t2 * __this , int32_t p0, t34* p1, int32_t p2, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SocketSend;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SocketSend'"));
		}
	}

	// Marshaling of parameter 'p0' to native representation

	// Marshaling of parameter 'p1' to native representation
	uint8_t* _p1_marshaled = { 0 };
	_p1_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)p1);

	// Marshaling of parameter 'p2' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0, _p1_marshaled, p2);

	// Marshaling cleanup of parameter 'p0' native representation

	// Marshaling cleanup of parameter 'p1' native representation

	// Marshaling cleanup of parameter 'p2' native representation

}
extern "C" {void DEFAULT_CALL SocketRecv(int32_t, uint8_t*, int32_t);}
extern "C" void m103 (t2 * __this , int32_t p0, t34* p1, int32_t p2, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SocketRecv;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SocketRecv'"));
		}
	}

	// Marshaling of parameter 'p0' to native representation

	// Marshaling of parameter 'p1' to native representation
	uint8_t* _p1_marshaled = { 0 };
	_p1_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)p1);

	// Marshaling of parameter 'p2' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0, _p1_marshaled, p2);

	// Marshaling cleanup of parameter 'p0' native representation

	// Marshaling cleanup of parameter 'p1' native representation

	// Marshaling cleanup of parameter 'p2' native representation

}
extern "C" {int32_t DEFAULT_CALL SocketRecvLength(int32_t);}
extern "C" int32_t m104 (t2 * __this , int32_t p0, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SocketRecvLength;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SocketRecvLength'"));
		}
	}

	// Marshaling of parameter 'p0' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

	return _return_value;
}
extern "C" {void DEFAULT_CALL SocketClose(int32_t);}
extern "C" void m105 (t2 * __this , int32_t p0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SocketClose;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SocketClose'"));
		}
	}

	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern "C" {int32_t DEFAULT_CALL SocketError(int32_t, uint8_t*, int32_t);}
extern "C" int32_t m106 (t2 * __this , int32_t p0, t34* p1, int32_t p2, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SocketError;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SocketError'"));
		}
	}

	// Marshaling of parameter 'p0' to native representation

	// Marshaling of parameter 'p1' to native representation
	uint8_t* _p1_marshaled = { 0 };
	_p1_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)p1);

	// Marshaling of parameter 'p2' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(p0, _p1_marshaled, p2);

	// Marshaling cleanup of parameter 'p0' native representation

	// Marshaling cleanup of parameter 'p1' native representation

	// Marshaling cleanup of parameter 'p2' native representation

	return _return_value;
}
extern "C" void m107 (t24 * __this, t34* p0, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t34* L_1 = p0;
		t34* L_2 = p0;
		m102(NULL, L_0, L_1, (((int32_t)((int32_t)(((t36 *)L_2)->max_length)))), NULL);
		return;
	}
}
extern TypeInfo* t34_TI_var;
extern "C" t34* m108 (t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t34_TI_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t34* V_1 = {0};
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = m104(NULL, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (t34*)NULL;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		V_1 = ((t34*)SZArrayNew(t34_TI_var, L_3));
		int32_t L_4 = (__this->f1);
		t34* L_5 = V_1;
		int32_t L_6 = V_0;
		m103(NULL, L_4, L_5, L_6, NULL);
		t34* L_7 = V_1;
		return L_7;
	}
}
extern TypeInfo* t23_TI_var;
extern "C" t2 * m109 (t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t23_TI_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	t23 * V_0 = {0};
	{
		t23 * L_0 = (t23 *)il2cpp_codegen_object_new (t23_TI_var);
		m91(L_0, NULL);
		V_0 = L_0;
		t23 * L_1 = V_0;
		L_1->f2 = __this;
		t23 * L_2 = V_0;
		return L_2;
	}
}
extern "C" void m110 (t24 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		m105(NULL, L_0, NULL);
		return;
	}
}
extern "C" bool m111 (t24 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = m101(NULL, L_0, NULL);
		return ((((int32_t)((((int32_t)L_1) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern TypeInfo* t34_TI_var;
extern TypeInfo* t52_TI_var;
extern "C" t3* m112 (t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t34_TI_var = il2cpp_codegen_type_info_from_index(27);
		t52_TI_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	t34* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_1 = ((t34*)SZArrayNew(t34_TI_var, ((int32_t)1024)));
		int32_t L_0 = (__this->f1);
		t34* L_1 = V_1;
		int32_t L_2 = m106(NULL, L_0, L_1, ((int32_t)1024), NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		return (t3*)NULL;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t52_TI_var);
		t52 * L_4 = m158(NULL, NULL);
		t34* L_5 = V_1;
		t3* L_6 = (t3*)VirtFuncInvoker1< t3*, t34* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_4, L_5);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
