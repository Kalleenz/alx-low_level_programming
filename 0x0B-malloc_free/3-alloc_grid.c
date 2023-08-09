#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point to allocating a memory to a 2D array
 * @width: columns
 * @height: rows
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptrgrid;
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptrgrid = malloc(height * sizeof(int *));
	if (ptrgrid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptrgrid[i] = malloc(width * sizeof(int));
		if (ptrgrid[i] == NULL)
		{
			return (NULL);
		}
		free(ptrgrid[i];
	}
	free(ptrgrid);
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			ptrgrid[j][k] = 0;
		}
	}
	return (ptrgrid);
}
