#include "main.h"

/**
 * _strchr - search for the first given character in a string
 * @s: the string
 * @c: character to be searched
 * Return: s
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
