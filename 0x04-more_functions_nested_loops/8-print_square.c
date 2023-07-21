#include "main.h"

/**
 * print_square - print square
 * @size: number of size
 * Return: 0
 */

void print_square(int size)
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
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
