#include "main.h"

/**
 * _isalpha - to check for alphabetic character
 *
 * @c: character needed
 * Return: return either 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
