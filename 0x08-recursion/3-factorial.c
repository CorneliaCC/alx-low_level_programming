#include "main.h"

/*
 * factorial - returns the factorial of a given number
 *
 * returns factorial of n
 */
int factorial(int n)
{
	if(n<0)
		return(-1);
	if(n==0)
		return(0);
	return(n*fatorial(n-1));
}
