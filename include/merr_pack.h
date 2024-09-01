#ifndef _MERR_PACK_H_
#define _MERR_PACK_H_

#include "merr.h"

#if __has_include(<string.h>)

    #include <string.h>
    #define MERR_POSIX(retf, type, name, args...)\
        MERR_MODEL(, _merr_ret_, strerror(_merr_ret_), _merr_ret_, retf, type, name, args)

    #if __has_include(<errno.h>)
        #include <errno.h>
        #define MERR_UNIX(retf, type, name, args...)\
            MERR_MODEL(, _merr_ret_ == -1, strerror(errno), errno, retf, type, name, args)
        #define MERR_UNIX_ZERO(retf, type, name, args...)\
            MERR_MODEL(, ! _merr_ret_, strerror(errno), errno, retf, type, name, args)
        #define MERR_UNIX_ERRNO(retf, type, name, args...)\
            MERR_MODEL(errno = 0, errno, strerror(errno), errno, retf, type, name, args)
    #endif

#endif

#if __has_include(<dlfcn.h>)
    #include <dlfcn.h>
    #define MERR_DL(retf, type, name, args...)\
        MERR_MODEL(, _merr_ret_, dlerror(), _merr_ret_, retf, type, name, args)
    #define MERR_DL_ZERO(retf, type, name, args...)\
        MERR_MODEL(, ! _merr_ret_, dlerror(), -1, retf, type, name, args)
#endif

#endif
