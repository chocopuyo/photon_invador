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

struct t2134;

#include "codegen/il2cpp-codegen.h"
#include "t2011.h"

extern "C" void m12888_gshared (t2134 * __this, const MethodInfo* method);
#define m12888(__this, method) (( void (*) (t2134 *, const MethodInfo*))m12888_gshared)(__this, method)
extern "C" int32_t m23659_gshared (t2134 * __this, t2011  p0, t2011  p1, const MethodInfo* method);
#define m23659(__this, p0, p1, method) (( int32_t (*) (t2134 *, t2011 , t2011 , const MethodInfo*))m23659_gshared)(__this, p0, p1, method)
