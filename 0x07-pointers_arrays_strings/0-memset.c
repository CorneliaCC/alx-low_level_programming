#include "main.h"

/*
 * fill memory with constant byte
 *
 * returns new value for n bytes to s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i=0; n>0; i++)
{
	s[i]=b;
	n--;
}
return (s);
}
