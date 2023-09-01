#include <stdio.h>
#include "main.h"

/**
 * print_binary - printing the binary representation of a number
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int now;
	int i;

	for (i = 63; i >= 0; i--)
	{
		now = n >> 1;
		if (now & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
