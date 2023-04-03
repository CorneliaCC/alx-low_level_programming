#include "main.h"

/*
 * _strpbrk - searches string for any set of bytes
 *
 * return - pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while(*s)
	{
		for(i=0; accept[i]; i++)
		{
		 if (*s == accept[i])
			 return (s);
		}
		s++;
	}
	return ('\0');
}
