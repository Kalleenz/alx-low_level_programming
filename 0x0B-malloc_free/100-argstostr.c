#include "main.h"
#include <stdlib.h>

/**
 * argstostr - entry point to concantenate arguments
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer
 */

char *argstostr(int ac, char **av)
{
	char *ptrargs;
	int i, j, k, l;
	int a = 0;
	int b = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			a + 1;
		}
		a++;
	}
	a++;

	ptrargs = malloc(a * sizeof(char));
	if (ptrargs == NUILL)
	{
		return (NULL);
	}

	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			ptrargs[b] = av[k][l];
			b++;
		}
		ptrargs[b] = '\n';
		b++;
	}
	ptrargs[b] = '\0';
	return (ptrargs);
}
