#include "main.h"

/**
 * get-endianness - checking the endianness
 * Return: an integer
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *e = (char *)&i;

	return (*e);
}
