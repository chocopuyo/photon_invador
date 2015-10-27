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

struct t2255;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t100.h"

extern "C" void m14146_gshared (t2255 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m14146(__this, p0, p1, method) (( void (*) (t2255 *, t2 *, t270, const MethodInfo*))m14146_gshared)(__this, p0, p1, method)
extern "C" t2 * m14147_gshared (t2255 * __this, uint8_t p0, t2 * p1, const MethodInfo* method);
#define m14147(__this, p0, p1, method) (( t2 * (*) (t2255 *, uint8_t, t2 *, const MethodInfo*))m14147_gshared)(__this, p0, p1, method)
extern "C" t2 * m14148_gshared (t2255 * __this, uint8_t p0, t2 * p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m14148(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2255 *, uint8_t, t2 *, t213 *, t2 *, const MethodInfo*))m14148_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2 * m14149_gshared (t2255 * __this, t2 * p0, const MethodInfo* method);
#define m14149(__this, p0, method) (( t2 * (*) (t2255 *, t2 *, const MethodInfo*))m14149_gshared)(__this, p0, method)
