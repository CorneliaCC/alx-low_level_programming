#include "main.h"

/*
 * _memcpy - copies memory area
 * dest - final memory location
 * src - original memory location
 * n -  number of bytes
 * return - a copy of memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int k=0;
int j=n; 
 for (; k<j; k++)
 {
	 dest[k]=src[k];
 	k--;
 }
return (dest);
}
