#ifndef __ICMP_HANDLER_H__
#define __ICMP_HANDLER_H__


#include "network.h"


#ifdef __linux__
void icmp_handler(network *n);
#endif

#endif // __ICMP_HANDLER_H__
