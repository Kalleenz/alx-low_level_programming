#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @nmemb: number of byte
 * @size: size
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptrcal;
	unsigned int m;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptrcal = malloc(nmemb * size);
	if (ptrcal == NULL)
	{
		return (NULL);
	}

	ptr = (unsigned char *)ptrcal;

	for (m = 0; m < (nmemb * size); m++)
	{
		ptr[m] = 0;
	}
	return (ptrcal);
}
