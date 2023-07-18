#include "main.h"

/**
 * print_last_digit - printing last digits
 * @d: integer
 * Return: ld
 */

int print_last_digit(int d)
{
	int ld;

	ld = d % 10;
	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
