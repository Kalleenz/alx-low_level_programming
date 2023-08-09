#include "main.h"
#include <stdlib.h>

/**
 * free_grid - freeing 2D grid
 * @grid: 2D grid
 * @height: row
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(ptrgrid[i];
	}
	free(ptrgrid);
}
