#include "main.h"

/**
 * print_most_numbers - print all numbers from 0 to 9 without printing 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		if (m == 2 || m == 4)
			continue;
		_putchar(m);
	}
	_putchar('\n');
}
