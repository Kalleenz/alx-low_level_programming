#include "main.h"

/**
 * _strspn - entry point to getting the length
 * of a prefix substring
 * @s: string to be scanned
 * @accept: string with required characters
 * Return: l
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				l++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (l);
			}
		}
	}
	return (l);
}
