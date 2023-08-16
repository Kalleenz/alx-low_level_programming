#include "function_pointers.h"

/**
 * print_name - prints a name with a function pointer
 * @name: name needed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
