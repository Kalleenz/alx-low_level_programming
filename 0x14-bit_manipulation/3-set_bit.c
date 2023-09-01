#include <stdio.h>
#include "main.h"

/**
 * set_bit - setting the value of a particular index to 1
 * @n: pointer to the number
 * @index: position of the number
 * Return: an integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
