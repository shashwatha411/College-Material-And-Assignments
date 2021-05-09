/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "prime.h"


void
prime_prog_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	int  prime_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, prime_PROG, prime_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
	do
	{
	printf("Enter a non-zero postive number: ");
	scanf("%d",&prime_1_arg);
	}while(prime_1_arg<1);
	result_1 = prime_1(&prime_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else
	{
	if(*result_1==0)
	printf("%d is not prime\n",prime_1_arg);
	else if(*result_1==1)
	printf("%d is prime\n",prime_1_arg);
	else
	printf("%d is neither prime nor composite\n",prime_1_arg);
	}
	
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	prime_prog_1 (host);
exit (0);
}
