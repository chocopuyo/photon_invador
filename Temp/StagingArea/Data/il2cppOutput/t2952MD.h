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

struct t2952;

#include "codegen/il2cpp-codegen.h"
#include "t1992.h"

extern "C" void m23643_gshared (t2952 * __this, const MethodInfo* method);
#define m23643(__this, method) (( void (*) (t2952 *, const MethodInfo*))m23643_gshared)(__this, method)
extern "C" int32_t m23644_gshared (t2952 * __this, t1992  p0, t1992  p1, const MethodInfo* method);
#define m23644(__this, p0, p1, method) (( int32_t (*) (t2952 *, t1992 , t1992 , const MethodInfo*))m23644_gshared)(__this, p0, p1, method)
