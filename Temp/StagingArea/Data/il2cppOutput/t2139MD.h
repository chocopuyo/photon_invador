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

struct t2139;

#include "codegen/il2cpp-codegen.h"
#include "t1139.h"

extern "C" void m12893_gshared (t2139 * __this, const MethodInfo* method);
#define m12893(__this, method) (( void (*) (t2139 *, const MethodInfo*))m12893_gshared)(__this, method)
extern "C" int32_t m23719_gshared (t2139 * __this, t1139  p0, const MethodInfo* method);
#define m23719(__this, p0, method) (( int32_t (*) (t2139 *, t1139 , const MethodInfo*))m23719_gshared)(__this, p0, method)
extern "C" bool m23720_gshared (t2139 * __this, t1139  p0, t1139  p1, const MethodInfo* method);
#define m23720(__this, p0, p1, method) (( bool (*) (t2139 *, t1139 , t1139 , const MethodInfo*))m23720_gshared)(__this, p0, p1, method)
