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

extern "C" void t1593_marshal(const t1593& unmarshaled, t1593_marshaled& marshaled);
extern "C" void t1593_marshal_back(const t1593_marshaled& marshaled, t1593& unmarshaled);
extern "C" void t1593_marshal_cleanup(t1593_marshaled& marshaled);
