#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - entry point to concantenate n number of string
 * @s1: destination string
 * @s2: source string
 * @n: number of source string to be used
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrn;
	unsigned int i, j, k, l;

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
	if (n >= j)
	{
		j = s2[j]
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
	}

	ptrn = malloc((i * sizeof(char)) + (j * sizeof(char)) + 1);
	if (ptrn == NULL)
	{
		return (NULL);
	}

	for (k = 0; s1[k] != '\0'; k++)
	{
		ptrn[k] = s1[k];
	}
	for (l = 0; l < n && s2[l] != '\0'; l++)
	{
		ptrn[k] = s2[l];
		k++;
	}
	ptrn[k] = '\0';
	return (ptrn);
}
