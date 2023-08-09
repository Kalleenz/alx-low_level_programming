#include "main.h"
#include <stdlib.h>

/**
 * str_concat - entry point to concatenate two strings
 * in a new alloacted memory
 * @s1: destination string
 * @s2: source string
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptrconcat;
	int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	ptrconcat = malloc((i * sizeof(char)) + (j * sizeof(char)) + 1);

	if (ptrconcat == NULL)
	{
		return (NULL);
	}

	for (k = 0; s1[k] != '\0'; k++)
	{
		ptrconcat[k] = s1[k];
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		ptrconcat[k] = s2[l];
		k++;
	}
	ptrconcat[k] = '\0';
	return (ptrconcat);
}
