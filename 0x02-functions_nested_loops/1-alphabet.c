#include "main.h"

/**
 * main - printing alphabets
 * description - using putchar twice
 * Return: 0
 */
int main(void)
{
	int n;

	print_alphabet();
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
