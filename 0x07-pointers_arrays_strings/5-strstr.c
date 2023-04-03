#include "main.h"

/*
 * _strstr - locates a substring
 *
 * return - pointer to the beginning of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *s = needle;

		while (*i == *s && *s != '\0')
		{
			i++;
			s++;
		}

		if (*s == '\0')
			return (haystack);
	}

	return (0);
}
