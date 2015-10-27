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

struct t2503;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t540.h"

extern "C" void m17818_gshared (t2503 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m17818(__this, p0, p1, method) (( void (*) (t2503 *, t2 *, t270, const MethodInfo*))m17818_gshared)(__this, p0, p1, method)
extern "C" int32_t m17819_gshared (t2503 * __this, t540  p0, t540  p1, const MethodInfo* method);
#define m17819(__this, p0, p1, method) (( int32_t (*) (t2503 *, t540 , t540 , const MethodInfo*))m17819_gshared)(__this, p0, p1, method)
extern "C" t2 * m17820_gshared (t2503 * __this, t540  p0, t540  p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m17820(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2503 *, t540 , t540 , t213 *, t2 *, const MethodInfo*))m17820_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m17821_gshared (t2503 * __this, t2 * p0, const MethodInfo* method);
#define m17821(__this, p0, method) (( int32_t (*) (t2503 *, t2 *, const MethodInfo*))m17821_gshared)(__this, p0, method)
