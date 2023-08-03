#include "main.h"

/**
 * _pow_recursion - entry point to raise power
 * @x: base
 * @y: number to be raised
 * Return: integers
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
