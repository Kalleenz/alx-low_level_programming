#include "main.h"

/**
 * print_line - printing lines
 * @n: number of lines to be printed
 * Return: void
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 1; m <= n; m++)
		{
			_putchar(95);
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
