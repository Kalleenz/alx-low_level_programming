#include <stdio.h>
#include "main.h"

/**
 * clear_bit - setting values of an index to 0
 * @n: pointer to a number
 * @index: index of a position
 * Return: an integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
