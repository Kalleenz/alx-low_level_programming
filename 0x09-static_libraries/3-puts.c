#include "main.h"

/**
 * _puts - printing a string to stdout
 * @str: string needed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
