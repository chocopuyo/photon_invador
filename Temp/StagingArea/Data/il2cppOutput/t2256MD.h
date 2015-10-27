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

struct t2256;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t2244.h"
#include "t100.h"

extern "C" void m14154_gshared (t2256 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m14154(__this, p0, p1, method) (( void (*) (t2256 *, t2 *, t270, const MethodInfo*))m14154_gshared)(__this, p0, p1, method)
extern "C" t2244  m14155_gshared (t2256 * __this, uint8_t p0, t2 * p1, const MethodInfo* method);
#define m14155(__this, p0, p1, method) (( t2244  (*) (t2256 *, uint8_t, t2 *, const MethodInfo*))m14155_gshared)(__this, p0, p1, method)
extern "C" t2 * m14156_gshared (t2256 * __this, uint8_t p0, t2 * p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m14156(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2256 *, uint8_t, t2 *, t213 *, t2 *, const MethodInfo*))m14156_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2244  m14157_gshared (t2256 * __this, t2 * p0, const MethodInfo* method);
#define m14157(__this, p0, method) (( t2244  (*) (t2256 *, t2 *, const MethodInfo*))m14157_gshared)(__this, p0, method)
