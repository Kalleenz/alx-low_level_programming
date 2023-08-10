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
	int m = 0;

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
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	ptrn = malloc((i * sizeof(char)) + (j * sizeof(char)) + 1);
	if (ptrn == NULL)
	{
		return (NULL);
	}

	for (k = 0; s1[k] != '\0'; k++)
	{
		ptrn[m] = s1[k];
		m++;
	}
	for (l = 0; l < n && s2[l] != '\0'; l++)
	{
		ptrn[m] = s2[l];
		m++;
	}
	ptrn[m] = '\0';
	return (ptrn);
}
