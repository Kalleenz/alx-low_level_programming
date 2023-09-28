#include "main.h"

/**
 * flip_bits - flipping from one number to another
 * @n: number
 * @m: number
 * Return: an integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int num = 0;
	unsigned long int temp;
	unsigned long int flip = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		temp = flip >> i;
		if (temp & 1)
			num++;
	}
	return (num);
}
