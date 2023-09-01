#include <stdio.h>
#include "main.h"

/**
 * get_bit - returning the value of bit of a given index
 * @n: integer
 * @index: index of the number
 * Return: an integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;

	return (bit);
}
