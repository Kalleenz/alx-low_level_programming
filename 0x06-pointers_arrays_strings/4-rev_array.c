#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: pointer
 * @n: number of character
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n - 1); i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
