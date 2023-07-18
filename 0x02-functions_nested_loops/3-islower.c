#include "main.h"

/**
 * _islower - used to check for lowercase characters
 * @c: the character needed
 * Return: returns 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
