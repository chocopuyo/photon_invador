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

struct t2132;

#include "codegen/il2cpp-codegen.h"
#include "t1992.h"

extern "C" void m12883_gshared (t2132 * __this, const MethodInfo* method);
#define m12883(__this, method) (( void (*) (t2132 *, const MethodInfo*))m12883_gshared)(__this, method)
extern "C" int32_t m23638_gshared (t2132 * __this, t1992  p0, t1992  p1, const MethodInfo* method);
#define m23638(__this, p0, p1, method) (( int32_t (*) (t2132 *, t1992 , t1992 , const MethodInfo*))m23638_gshared)(__this, p0, p1, method)
