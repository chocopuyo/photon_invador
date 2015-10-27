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

struct t2138;

#include "codegen/il2cpp-codegen.h"
#include "t1139.h"

extern "C" void m12892_gshared (t2138 * __this, const MethodInfo* method);
#define m12892(__this, method) (( void (*) (t2138 *, const MethodInfo*))m12892_gshared)(__this, method)
extern "C" int32_t m23712_gshared (t2138 * __this, t1139  p0, t1139  p1, const MethodInfo* method);
#define m23712(__this, p0, p1, method) (( int32_t (*) (t2138 *, t1139 , t1139 , const MethodInfo*))m23712_gshared)(__this, p0, p1, method)
