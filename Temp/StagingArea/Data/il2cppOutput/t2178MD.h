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

struct t2178;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t388.h"

extern "C" void m13509_gshared (t2178 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m13509(__this, p0, p1, method) (( void (*) (t2178 *, t2 *, t270, const MethodInfo*))m13509_gshared)(__this, p0, p1, method)
extern "C" t388  m13510_gshared (t2178 * __this, uint8_t p0, t2 * p1, const MethodInfo* method);
#define m13510(__this, p0, p1, method) (( t388  (*) (t2178 *, uint8_t, t2 *, const MethodInfo*))m13510_gshared)(__this, p0, p1, method)
extern "C" t2 * m13511_gshared (t2178 * __this, uint8_t p0, t2 * p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m13511(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2178 *, uint8_t, t2 *, t213 *, t2 *, const MethodInfo*))m13511_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t388  m13512_gshared (t2178 * __this, t2 * p0, const MethodInfo* method);
#define m13512(__this, p0, method) (( t388  (*) (t2178 *, t2 *, const MethodInfo*))m13512_gshared)(__this, p0, method)
