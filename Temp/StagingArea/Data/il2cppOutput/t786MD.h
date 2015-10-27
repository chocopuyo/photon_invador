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

struct t2;
struct t3;

#include "codegen/il2cpp-codegen.h"
#include "t786.h"

extern "C" void m13440_gshared (t786 * __this, uint8_t p0, t2 * p1, const MethodInfo* method);
#define m13440(__this, p0, p1, method) (( void (*) (t786 *, uint8_t, t2 *, const MethodInfo*))m13440_gshared)(__this, p0, p1, method)
extern "C" uint8_t m3951_gshared (t786 * __this, const MethodInfo* method);
#define m3951(__this, method) (( uint8_t (*) (t786 *, const MethodInfo*))m3951_gshared)(__this, method)
extern "C" void m13441_gshared (t786 * __this, uint8_t p0, const MethodInfo* method);
#define m13441(__this, p0, method) (( void (*) (t786 *, uint8_t, const MethodInfo*))m13441_gshared)(__this, p0, method)
extern "C" t2 * m3952_gshared (t786 * __this, const MethodInfo* method);
#define m3952(__this, method) (( t2 * (*) (t786 *, const MethodInfo*))m3952_gshared)(__this, method)
extern "C" void m13442_gshared (t786 * __this, t2 * p0, const MethodInfo* method);
#define m13442(__this, p0, method) (( void (*) (t786 *, t2 *, const MethodInfo*))m13442_gshared)(__this, p0, method)
extern "C" t3* m13443_gshared (t786 * __this, const MethodInfo* method);
#define m13443(__this, method) (( t3* (*) (t786 *, const MethodInfo*))m13443_gshared)(__this, method)
