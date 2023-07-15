#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry mode
 * description - Printing double digit that are different
 * Return: 0 Success
 */
int main(void)
{
	int f;
	int s;

	for (f = 0; f <= 8; f++)
	{
		for (s = f + 1; s <= 9; s++)
		{
			putchar(f + '0');
			putchar(s + '0');

			if (f < 8 || s < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
