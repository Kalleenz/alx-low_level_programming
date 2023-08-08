#include "main.h"
#include <stdlib.h>

/**
 * _strdup - main entry to copy a string to a new allocated memory
 * @str: string to be copied
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *ptrdup;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	ptrdup = malloc((i * sizeof(char)) + 1);

	if (ptrdup == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		ptrdup[j] = str[j];
	}

	ptrdup[j] = '\0';
	return (ptrdup);
}
