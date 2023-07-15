#include <stdio.h>
/**
 * main - Entry mode
 * description - Printing double digit that are different
 * Return: 0 Success
 */
int main(void)
{
	int f;
	int s;
	int t;

	for (f = 0; f <= 7; f++)
	{
		for (s = f + 1; s <= 8; s++)
		{
			for (t = s + 1; t <= 9; t++)
			{
				putchar(f + '0');
				putchar(s + '0');
				putchar(t + '0');

				if (f < 7 || s < 8 || t < 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
