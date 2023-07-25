#include <stdio.h>
#include "main.h"

/**
 * print_array - printing elements of an array of integers
 * @a: array
 * @n: integers needed
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
