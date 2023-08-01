#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - printing the sum of the diagonal in a square matrix
 * @a: pointer
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + *(a + i * size + i);
		s2 = s2 + *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", s1, s2);
}
