#include "main.h"

/**
 * _strlen - length of a string
 * @s: string needed
 * Return: l
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
