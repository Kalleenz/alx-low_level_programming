#include <stdio.h>

/**
 * main - printing the sum of even valued fibonacci numbers less tha 4000000
 * Return: 0
 */

int main(void)
{
	int x;
	long a = 1;
	long b = 2;
	long add = b;

	for (x = 0; x < 4000000; x++)
	{
		while (b + a < 4000000)
		{
			b = b + a;
			if (b % 2 == 0)
			{
				add = add + b;
			}
			a = b - a;
		}
		printf("%ld", add);
	}
	printf("\n");
	return (0);
}
