#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating an array and initializing with a specific character
 * @size: size of the array
 * @c: specific character to be initialized
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *pchar;
	unsigned int i;

	pchar = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (pchar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		pchar[i] = c;
	}
	return (pchar);
}
