/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calc.h"

int *
calc_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static int  result;
	if(argp->op=='a')
	{
	printf("add(%d,%d)is called\n",argp->a,argp->b);
	result=(argp->a)+(argp->b);
	}
	else if(argp->op=='s')
	{
	printf("sub(%d,%d)is called\n",argp->a,argp->b);
	result=(argp->a)-(argp->b);
	}
	else if(argp->op=='m')
	{
	printf("mul(%d,%d)is called\n",argp->a,argp->b);
	result=(argp->a)*(argp->b);
	}
	else if(argp->op=='r')
	{
	printf("mod(%d,%d)is called\n",argp->a,argp->b);
	result=(argp->a)%(argp->b);
	}
	else
	{
	printf("div(%d,%d)is called\n",argp->a,argp->b);
	result=(argp->a)/(argp->b);
	}
		
	return &result;
}
