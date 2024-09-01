#ifndef _MERR_SEMAPHORE_H_
#define _MERR_SEMAPHORE_H_

#include <semaphore.h>
#include "../merr_pack.h"

#define MERR_sem_destroy(args...)	MERR_UNIX("%d", int, sem_destroy, args)
#define MERR_sem_init(args...)		MERR_UNIX("%d", int, sem_init, args)
#define MERR_sem_post(args...)		MERR_UNIX("%d", int, sem_post, args)
#define MERR_sem_wait(args...)		MERR_UNIX("%d", int, sem_wait, args)

#endif
