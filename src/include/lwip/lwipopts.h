#ifndef TUN2SOCKS_LWIPOPTS_H
#define TUN2SOCKS_LWIPOPTS_H
/*
        We just need raw API.
*/
#define NO_SYS 1
#define SYS_LIGHTWEIGHT_PROT 0
#define LWIP_NETCONN 0
#define LWIP_SOCKET 0
/*
        4 bytes alignment.
*/
#define MEM_ALIGNMENT 4

/*
        We don't need extra interfaces.
*/
#define LWIP_HAVE_LOOPIF 1
#define LWIP_NETIF_LOOPBACK 1

/*
        We don't need ethernet layer and therefore arp protocol.
*/
#define LWIP_ARP 0

#define LWIP_ETHERNET 0

/*
        Enable scaling.
*/
#define LWIP_WND_SCALE 1
#define TCP_RCV_SCALE  4


/*
        What's wrong with my program???
*/
#define LWIP_DEBUG 1
#define LWIP_DBG_MIN_LEVEL  LWIP_DBG_LEVEL_ALL
#define TCP_DEBUG LWIP_DBG_ON
#define TCP_OUTPUT_DEBUG LWIP_DBG_ON
#define TCP_INPUT_DEBUG LWIP_DBG_ON
#define MEM_DEBUG LWIP_DBG_ON

/*
        Memory management.
*/
#define MEM_SIZE 2048000

/*
        Internal pools
*/
#define MEMP_NUM_PBUF 8192

#define MEMP_NUM_UDP_PCB 4096

#define MEMP_NUM_TCP_PCB 4096

#define MEMP_NUM_TCP_PCB_LISTEN 16

#define MEMP_NUM_TCP_SEG 8192

#define MEMP_NUM_FRAG_PBUF 4096

#endif
