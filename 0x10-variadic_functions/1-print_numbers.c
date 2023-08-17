#include "variadic_functions.h"

/**
 * print_numbers - print the numbers with a separator
 * @separator: a delimiter
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;

	unsigned int i;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(print);
	_putchar('\n');
}