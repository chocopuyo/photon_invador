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

struct t2130;

#include "codegen/il2cpp-codegen.h"
#include "t556.h"

extern "C" void m12881_gshared (t2130 * __this, const MethodInfo* method);
#define m12881(__this, method) (( void (*) (t2130 *, const MethodInfo*))m12881_gshared)(__this, method)
extern "C" int32_t m23621_gshared (t2130 * __this, t556  p0, t556  p1, const MethodInfo* method);
#define m23621(__this, p0, p1, method) (( int32_t (*) (t2130 *, t556 , t556 , const MethodInfo*))m23621_gshared)(__this, p0, p1, method)
