#include "main.h"

/**
 * presqr - function helping the squareroot function
 * @n: integer
 * @a: integer to guess the perfect squareroot
 * Return: integers
 */

int presqr(int n, int a)
{
	if (a * a == n)
	{
		return (n);
	}
	if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (presqr(n, a + 1));
	}
}

/**
 * _sqrt_recursion - function for the square root
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (presqr(n, 0));
}
