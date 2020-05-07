
#ifndef ONEMKL_EXPORT_H
#define ONEMKL_EXPORT_H

#include "onemkl/detail/config.hpp"

#if !defined (BUILD_SHARED_LIBS) || !defined (_WIN64)
#  define ONEMKL_EXPORT
#  define ONEMKL_NO_EXPORT
#else
#  ifndef ONEMKL_EXPORT
#    ifdef onemkl_EXPORTS
        /* We are building this library */
#      define ONEMKL_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define ONEMKL_EXPORT __declspec(dllimport)
#    endif
#  endif
#endif

#endif /* ONEMKL_EXPORT_H */
