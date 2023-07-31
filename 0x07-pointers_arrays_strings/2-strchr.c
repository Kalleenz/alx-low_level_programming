#include "main.h"
#include <stddef.h>

/**
 * _strchr - search for the first given character in a string
 * @s: the string pointer
 * @c: character to be searched
 * Return: s or NULL
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
