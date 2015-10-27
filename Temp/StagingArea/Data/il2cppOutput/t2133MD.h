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

struct t2133;

#include "codegen/il2cpp-codegen.h"
#include "t1992.h"

extern "C" void m12884_gshared (t2133 * __this, const MethodInfo* method);
#define m12884(__this, method) (( void (*) (t2133 *, const MethodInfo*))m12884_gshared)(__this, method)
extern "C" int32_t m23645_gshared (t2133 * __this, t1992  p0, const MethodInfo* method);
#define m23645(__this, p0, method) (( int32_t (*) (t2133 *, t1992 , const MethodInfo*))m23645_gshared)(__this, p0, method)
extern "C" bool m23646_gshared (t2133 * __this, t1992  p0, t1992  p1, const MethodInfo* method);
#define m23646(__this, p0, p1, method) (( bool (*) (t2133 *, t1992 , t1992 , const MethodInfo*))m23646_gshared)(__this, p0, p1, method)
