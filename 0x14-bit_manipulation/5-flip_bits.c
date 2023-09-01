#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of bits needed to flip one number to another
 * @n: number
 * @m: number/integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int now;
	unsigned long int flip;
	int count = 0;
	int i;

	flip = n^m;

	for (i = 63; i >= 0; i--)
	{
		now = flip >> 1;
		if (now & 1)
			count++;
	}
	return (count);
}
