/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PALIN_H_RPCGEN
#define _PALIN_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct str {
	char arr[20];
};
typedef struct str str;

#define PALIN_PROGRAM 0x23451111
#define PALIN_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define plain 1
extern  int * plain_1(str *, CLIENT *);
extern  int * plain_1_svc(str *, struct svc_req *);
extern int palin_program_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define plain 1
extern  int * plain_1();
extern  int * plain_1_svc();
extern int palin_program_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_str (XDR *, str*);

#else /* K&R C */
extern bool_t xdr_str ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PALIN_H_RPCGEN */
