#include "main.h"

/**
 * print_diagonal - printing diagonally
 * @n: number of diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, f;

		for (m = 0; m < n; m++)
		{
			for (f = 0; f < n; f++)
			{
				if (f == m)
				{
					_putchar('\\');
				}
				else if (f < m)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
