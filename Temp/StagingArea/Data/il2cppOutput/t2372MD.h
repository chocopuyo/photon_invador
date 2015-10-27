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

struct t2372;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"

extern "C" void m16022_gshared (t2372 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m16022(__this, p0, p1, method) (( void (*) (t2372 *, t2 *, t270, const MethodInfo*))m16022_gshared)(__this, p0, p1, method)
extern "C" bool m16023_gshared (t2372 * __this, uint8_t p0, const MethodInfo* method);
#define m16023(__this, p0, method) (( bool (*) (t2372 *, uint8_t, const MethodInfo*))m16023_gshared)(__this, p0, method)
extern "C" t2 * m16024_gshared (t2372 * __this, uint8_t p0, t213 * p1, t2 * p2, const MethodInfo* method);
#define m16024(__this, p0, p1, p2, method) (( t2 * (*) (t2372 *, uint8_t, t213 *, t2 *, const MethodInfo*))m16024_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16025_gshared (t2372 * __this, t2 * p0, const MethodInfo* method);
#define m16025(__this, p0, method) (( bool (*) (t2372 *, t2 *, const MethodInfo*))m16025_gshared)(__this, p0, method)
