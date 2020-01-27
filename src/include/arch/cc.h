#ifndef TUN2SOCKS_CC_H
#define TUN2SOCKS_CC_H

/*
        Just for memset.
*/
#include <string.h>

/*
        We didn't have unistd.h indeed.
*/
#define LWIP_NO_UNISTD_H 1

/*
        Using default values is okay.
*/

#define PACK_STRUCT_USE_INCLUDES 1

#define LWIP_DONT_PROVIDE_BYTEORDER_FUNCTIONS

#endif
