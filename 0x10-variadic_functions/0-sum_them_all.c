#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the given integers
 * @n: number of arguments
 * Return: an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list su;

	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(su, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(su, int);
	}
	va_end(su);
	return (sum);
}
