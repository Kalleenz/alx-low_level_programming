#include "main.h"

/**
 * print_line - printing lines
 * @n: number of lines to be printed
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int m;

		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}

}
