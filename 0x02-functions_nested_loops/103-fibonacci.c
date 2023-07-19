#include <stdio.h>

/**
 * main - printing the sum of even valued fibonacci numbers less tha 4000000
 * Return: 0
 */

int main(void)
{
	int x = 0;
	long a = 1;
	long b = 2;
	long add = b;

	while (b + a < 4000000)
	{
		b = b + a;
		if (b % 2 == 0)
		{
			add = add + b;
		}
		a = b - a;
		x++;
	}
	printf("%ld\n", add);
	return (0);
}
