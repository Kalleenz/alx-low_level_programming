#include "main.h"

/**
 * _strchr - search for the first given character in a string
 * @s: the string pointer
 * @c: character to be searched
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
