#ifndef _MERR_UNISTD_H_
#define _MERR_UNISTD_H_

#include <unistd.h>
#include "../merr_pack.h"

#define MERR_execve(args...)	MERR_UNIX("%d", int, execve, args)
#define MERR_fork(args...)	MERR_UNIX("%d", pid_t, fork, args)

#endif
