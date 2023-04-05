#include "main.h"

/*
 * _strlen_recursion - returns length of string
 *
 * returns length of string
 */
int _strlen_recursion(char *s)
{
	int lngth =0;

	if (*s)
	{
		lngth++;
		lngth += _strlen_recursion(s + 1);
	}

	return (lngth);
}
