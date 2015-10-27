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

struct t2502;

#include "codegen/il2cpp-codegen.h"
#include "t540.h"

extern "C" void m17816_gshared (t2502 * __this, const MethodInfo* method);
#define m17816(__this, method) (( void (*) (t2502 *, const MethodInfo*))m17816_gshared)(__this, method)
extern "C" int32_t m17817_gshared (t2502 * __this, t540  p0, t540  p1, const MethodInfo* method);
#define m17817(__this, p0, p1, method) (( int32_t (*) (t2502 *, t540 , t540 , const MethodInfo*))m17817_gshared)(__this, p0, p1, method)
