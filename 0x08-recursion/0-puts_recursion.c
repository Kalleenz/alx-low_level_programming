#include "main.h"

/**
 * _puts_recursion - entry point to print a string
 * @s: string pointer
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
	_putchar('\n');
}
