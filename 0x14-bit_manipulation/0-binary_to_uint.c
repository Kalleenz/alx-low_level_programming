#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converting binary to an unsigned int
 * @b: binary string
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int power = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		count = count * 2 + (digit - '0');
		power *= 2;
	}
	return (count);
}
