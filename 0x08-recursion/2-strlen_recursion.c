#include "main.h"

/**
 * _strlen_recursion - entry point to getting the
 * length of a string
 * @s: string pointer
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s == '\0')
	{
		return (a);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
