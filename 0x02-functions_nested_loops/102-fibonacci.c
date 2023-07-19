#include <stdio.h>

/**
 * main - printing the first 50 fibonacci numbers starting from 1 and 2
 * Return: 0
 */

int main(void)
{
	int x;
	long a = 1;
	long b = 2;

	for (x = 0; x < 50; x++)
	{
		if (x == 0)
		{
			printf("%ld", a);
		}
		else if (x == 1)
		{
			printf(", %ld", b);
		}
		else
		{
			b = b + a;
			a = b - a;
			printf(", %ld", b);
		}
	}
	printf("\n");
	return (0);
}
