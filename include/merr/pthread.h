#ifndef _MERR_PTHREAD_H_
#define _MERR_PTHREAD_H_

#include <pthread.h>
#include "../merr_pack.h"

#define MERR_pthread_create(args...)	MERR_POSIX("%d", int, pthread_create, args)
#define MERR_pthread_detach(args...)	MERR_POSIX("%d", int, pthread_detach, args)

#endif
