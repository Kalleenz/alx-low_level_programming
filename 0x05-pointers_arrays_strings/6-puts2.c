#include "main.h"

/**
 * puts2 - printing every other  character of a string
 * @str: string needed
 * Return: string
 */

void puts2(char *str)
{
	int l = 0;
	int m = 0;
	char *c = str;
	int n;

	while (*c != '\0')
	{
		l++;
		c++;
	}
	m = l - 1;
	for (n = 0; n <= m; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}

	}
	_putchar('\n');
}
