#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checking endianness
 * Return: an integer
 */
int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char*) & i;

	return (*c);
}
