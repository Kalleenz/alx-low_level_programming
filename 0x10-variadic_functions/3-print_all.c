#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - printing all types of data in the format list
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	va_list all;

	int a = 0;
	char *delimiter = "";
	char *string;

	va_start(all, format);
	if (format != NULL)
	{
		while (format[a] != '\0')
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", delimiter, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", delimiter, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", delimiter, va_arg(all, double));
					break;
				case 's':
					string = va_arg(all, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", delimiter, string);
					break;
				default:
					a++;
					continue;
			}
			delimiter = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(all);
}
