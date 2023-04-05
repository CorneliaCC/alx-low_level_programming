#include "main.h"

int actual_sqrt_recursion(int n, int i);
/*
 * _sqrt_recursion - returns natural square root of number
 *
 * returns square root of number
 */
int _sqrt_recursion(int n)
{
	 (n < 0)
		return(-1);
	return(actual_sqrt_recursion(n, 0));
}

/*
 * actual_sqrt_recursion - recurses to find the natural square root of a number
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int k)
{
	if (k * k > n)
		return(-1);
	if (k * k == n)
		return(k);
	return(actual_sqrt_recursion(n, k + 1));
}

