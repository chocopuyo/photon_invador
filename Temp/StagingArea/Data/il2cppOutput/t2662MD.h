#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2662;

#include "codegen/il2cpp-codegen.h"
#include "t831.h"

extern "C" void m19945_gshared (t2662 * __this, const MethodInfo* method);
#define m19945(__this, method) (( void (*) (t2662 *, const MethodInfo*))m19945_gshared)(__this, method)
extern "C" int32_t m19946_gshared (t2662 * __this, t831  p0, const MethodInfo* method);
#define m19946(__this, p0, method) (( int32_t (*) (t2662 *, t831 , const MethodInfo*))m19946_gshared)(__this, p0, method)
extern "C" bool m19947_gshared (t2662 * __this, t831  p0, t831  p1, const MethodInfo* method);
#define m19947(__this, p0, p1, method) (( bool (*) (t2662 *, t831 , t831 , const MethodInfo*))m19947_gshared)(__this, p0, p1, method)
