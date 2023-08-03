#include "main.h"

/**
 * pre_prime - recursion helper for prime number function
 * @n: integer needed
 * @num: divisor
 * Return: integers
 */
int pre_prime(int n, int num)
{
	if (num == 1)
	{
		return (0);
	}
	if (n % num == 0)
	{
		return (1);
	}
	else
	{
		return (pre_prime(n, num - 1));
	}
}
/**
 * is_prime_number - prime number function
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!(pre_prime(n, n - 1)));
}
