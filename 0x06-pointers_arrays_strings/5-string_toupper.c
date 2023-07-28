#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @p: pointer
 * Return: p
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}
	}
	return (p);
}
