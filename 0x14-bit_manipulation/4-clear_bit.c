#include "main.h"

/**
 * clear_bit - setting the bit to 0
 * @n: pointer to the number
 * @index: index of number
 * Return: an integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
