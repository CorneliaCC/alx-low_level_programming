#include "main.h"
#include <stdio.h>

/*
 * _printdiagsums - prints the sum of the two diagonals of a square matrix of integers
 *
 * return - 0
 */
void print_diagsums(int *a, int size)
{
	int s1;
	int s2;
       	int i;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		s2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", s1, s2);
}
