#include "main.h"

/**
 * _strpbrk - entry point for the first corresponding character
 * @s: string one
 * @accept: string two
 * Return: s or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i] != 0; i++)
		{
			if (*s == accept[i])
			{
				return (&*s);
			}
		}
	}
	return (0);

}
