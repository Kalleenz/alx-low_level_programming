#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name with a function pointer
 * @name: name needed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	int i;

	f(name);
	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
