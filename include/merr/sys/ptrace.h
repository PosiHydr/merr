#ifndef _MERR_SYS_PTRACE_H_
#define _MERR_SYS_PTRACE_H_

#include <sys/ptrace.h>
#include "../../merr_pack.h"

#define MERR_ptrace(args...)	MERR_UNIX_ERRNO("%ld", long, ptrace, args)

#endif
