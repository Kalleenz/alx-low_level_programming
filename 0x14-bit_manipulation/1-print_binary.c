#include <stddef.h>
#include "main.h"

/**
 * print_binary - printing decimal to binary
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	int i;
	int num = 0;
	unsigned long int temp;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;
		if (temp & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (num == NULL)
		_putchar('0');
}
