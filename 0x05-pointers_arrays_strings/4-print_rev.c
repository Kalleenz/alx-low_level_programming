#include "main.h"

/**
 * print_rev - printing a string to stdout in reverse
 * @s: string needed
 */

void print_rev(char *s)
{
	int l = 0;
	int i;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (i = l; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
