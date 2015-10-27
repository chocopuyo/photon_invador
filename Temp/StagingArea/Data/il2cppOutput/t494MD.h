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

extern "C" void t494_marshal(const t494& unmarshaled, t494_marshaled& marshaled);
extern "C" void t494_marshal_back(const t494_marshaled& marshaled, t494& unmarshaled);
extern "C" void t494_marshal_cleanup(t494_marshaled& marshaled);
