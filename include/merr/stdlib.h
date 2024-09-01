#ifndef _MERR_STDLIB_H_
#define _MERR_STDLIB_H_

#include <stdlib.h>
#include "../merr_pack.h"

#define MERR_atoi(args...)	atoi(args)
#define MERR_free(args...)	free(args)

#define MERR_malloc(args...)	MERR_UNIX_ZERO("%p", void*, malloc, args)

#endif
