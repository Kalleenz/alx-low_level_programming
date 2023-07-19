#include <stdio.h>

/**
 * main - sum of the multiples of 3 and 5 below 1024
 * Return: 0
 */

int main(void)
{
	int a;
	int b = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b = b + a;
		}
	}
	printf("%d\n", b);
	return (0);
}
