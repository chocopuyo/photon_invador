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

struct t2410;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16600_gshared (t2410 * __this, const MethodInfo* method);
#define m16600(__this, method) (( void (*) (t2410 *, const MethodInfo*))m16600_gshared)(__this, method)
extern "C" void m16601_gshared (t2 * __this , const MethodInfo* method);
#define m16601(__this , method) (( void (*) (t2 * , const MethodInfo*))m16601_gshared)(__this , method)
extern "C" int32_t m16602_gshared (t2410 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m16602(__this, p0, p1, method) (( int32_t (*) (t2410 *, t2 *, t2 *, const MethodInfo*))m16602_gshared)(__this, p0, p1, method)
extern "C" t2410 * m16603_gshared (t2 * __this , const MethodInfo* method);
#define m16603(__this , method) (( t2410 * (*) (t2 * , const MethodInfo*))m16603_gshared)(__this , method)
