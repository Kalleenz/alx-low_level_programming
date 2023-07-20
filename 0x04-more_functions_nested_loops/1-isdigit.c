#include "main.h"

/**
 * _isdigit - checking for a digit through 0 and 9
 * @c: integer needed
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
