#ifndef _MERR_DLFCN_H_
#define _MERR_DLFCN_H_

#include <dlfcn.h>
#include "../merr_pack.h"

#define MERR_dlclose(args...)	MERR_DL("%d", int, dlclose, args)

#define MERR_dlopen(args...)	MERR_DL_ZERO("%p", void*, dlopen, args)
#define MERR_dlsym(args...)	MERR_DL_ZERO("%p", void*, dlsym, args)

#endif
