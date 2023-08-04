#include "main.h"

/**
 * _isdigit - checking for a digit through 0 and 9
 * @c: integer needed
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
