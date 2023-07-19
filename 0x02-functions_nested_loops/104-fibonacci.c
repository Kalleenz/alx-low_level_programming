#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers starting from 1 and 2
 * Return: 0
 */

int main(void)
{
	int num;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1x1, f1x2, f2x1, f2x2;
	unsigned long x1, x2;

	for (num = 0; num < 92; num++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);

		f1 = f2;
		f2 = sum;
	}

	f1x1 = f1 / 10000000000;
	f2x1 = f2 / 10000000000;
	f1x2 = f1 % 10000000000;
	f2x2 = f2 % 10000000000;

	for (num = 93; num < 99; num++)
	{
		x1 = f1x1 + f2x1;
		x2 = f1x2 + f2x2;
		if (f1x2 + f2x2 > 9999999999)
		{
			x1 = x1 + 1;
			x2 = x2 % 10000000000;
		}
		printf("%lu%lu", x1, x2);
		if (num != 98)
		{
			printf(", ");
		}
		f1x1 = f2x1;
		f1x2 = f2x2;
		f2x1 = x1;
		f2x2 = x2;
	}
	printf("\n");
	return (0);
}
