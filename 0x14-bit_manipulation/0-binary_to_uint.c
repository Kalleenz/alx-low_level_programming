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
	int i;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);

		integer = 2 * integer + (b[i] - '0');
		i++;
	}
	return (integer);
}
