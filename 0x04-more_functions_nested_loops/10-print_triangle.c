#include "main.h"

/**
 * print_triangle - printing triangle with #
 * @size: number of triangle
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, n;

		for (m = 0; m < size; m++)
		{
			for (n = m; n < size; n++)
			{
				_putchar(' ');
			}
			for (n = 0; n < m; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
