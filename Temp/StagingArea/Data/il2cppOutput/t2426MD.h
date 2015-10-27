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

struct t2426;

#include "codegen/il2cpp-codegen.h"
#include "t56.h"

extern "C" void m16775_gshared (t2426 * __this, const MethodInfo* method);
#define m16775(__this, method) (( void (*) (t2426 *, const MethodInfo*))m16775_gshared)(__this, method)
extern "C" int32_t m16776_gshared (t2426 * __this, t56  p0, t56  p1, const MethodInfo* method);
#define m16776(__this, p0, p1, method) (( int32_t (*) (t2426 *, t56 , t56 , const MethodInfo*))m16776_gshared)(__this, p0, p1, method)
