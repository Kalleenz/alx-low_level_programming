#include "main.h"
#include <stdlib.h>

/**
 * array_range - entry point
 * @min: minimum integer
 * @max: maximum integer
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *ptrange;
	int s, i;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}
	s = (max - min) + 1;

	ptrange = malloc(s * sizeof(int));
	if (ptrange == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptrange[j] = min++;
		j++;
	}
	return (ptrange);
}
