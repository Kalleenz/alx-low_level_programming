#include "main.h"

/**
 * print_alphabet_x10 - printing alphabets times 10
 */
void print_alphabet_x10(void)
{
	int i, v;

	for (i = 0; i < 10; i++)
	{
		for (v = 'a'; v <= 'z'; v++)
		{
			_putchar(v);
		}
		_putchar('\n');
	}
}
