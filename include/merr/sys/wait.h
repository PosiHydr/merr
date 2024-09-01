#ifndef _MERR_SYS_WAIT_H_
#define _MERR_SYS_WAIT_H_

#include <sys/wait.h>
#include "../../merr_pack.h"

#define MERR_waitpid(args...)	MERR_UNIX("%d", pid_t, waitpid, args)

#endif
