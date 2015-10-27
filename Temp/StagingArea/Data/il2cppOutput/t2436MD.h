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

struct t2436;

#include "codegen/il2cpp-codegen.h"
#include "t477.h"

extern "C" void m16920_gshared (t2436 * __this, const MethodInfo* method);
#define m16920(__this, method) (( void (*) (t2436 *, const MethodInfo*))m16920_gshared)(__this, method)
extern "C" int32_t m16921_gshared (t2436 * __this, t477  p0, t477  p1, const MethodInfo* method);
#define m16921(__this, p0, p1, method) (( int32_t (*) (t2436 *, t477 , t477 , const MethodInfo*))m16921_gshared)(__this, p0, p1, method)
