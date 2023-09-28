#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - conversion of binary to an unsigned integer
 * @b: pointer of the char string
 * Return: an integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int integer = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' || *b != '1')
			return (0);

		integer <<= 1;
		integer = integer + (*b - '0');
		b++;
	}
	return (integer);
}
