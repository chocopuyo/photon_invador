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


#include "codegen/il2cpp-codegen.h"

extern "C" void t86_marshal(const t86& unmarshaled, t86_marshaled& marshaled);
extern "C" void t86_marshal_back(const t86_marshaled& marshaled, t86& unmarshaled);
extern "C" void t86_marshal_cleanup(t86_marshaled& marshaled);
