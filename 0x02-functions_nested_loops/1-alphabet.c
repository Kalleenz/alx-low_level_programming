#include "main.h"

/**
 * main - printing alphabets
 * description - using putchar twice
 * Return: 0
 */
void print_alphabet(void);
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
