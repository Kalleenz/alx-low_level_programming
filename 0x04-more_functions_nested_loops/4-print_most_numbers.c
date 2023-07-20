#include "main.h"

/**
 * print_most_numbers - print all numbers from 0 to 9 without printing 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		if (m == 50 || m == 52)
			continue;
		_putchar(m);
	}
	_putchar('\n');
}
