#include "main.h"

/**
 * print_chessboard - entry point
 * @a: pointer
 */

void print_chessboard(char (*a)[8])
{
	int d, b;

	for (d = 0; d < 8; d++)
	{
		_putchar('\n');
		for (b = 0; b < 8; b++)
		{
			_putchar(a[d][b]);
		}
	}
}
