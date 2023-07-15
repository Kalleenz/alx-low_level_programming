#include <stdio.h>
/**
 * main - Entry point
 * description - printing all possible combos
 * Return: 0 Success
 */
int main(void)
{
	int f;
	int s;

	for (f = 0; f <= 98; f++)
	{
		for (s = 1; s <= 99; s++)
		{
			int num1 = f / 10;
			int num2 = f % 10;
			int num3 = s / 10;
			int num4 = s % 10;

			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(' ');
			putchar(num3 + '0');
			putchar(num4 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
