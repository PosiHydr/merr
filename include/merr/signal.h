#ifndef _MERR_SIGNAL_H_
#define _MERR_SIGNAL_H_

#include <signal.h>
#include "../merr_pack.h"

#define MERR_kill(args...)	MERR_UNIX("%d", int, kill, args)

#endif
