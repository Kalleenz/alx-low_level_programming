#include <stdio.h>

/**
 * main - printing the first 50 fibonacci numbers starting from 1 and 2
 * Return: 0
 */

int main(void)
{
	int x;
	int a = 1;
	int b = 2;

	for (x = 0; x < 50; x++)
	{
		if (x == 0)
		{
			printf("%d, ", a);
		}
		else if (x == 1)
		{
			printf("%d, ", b);
		}
		else
		{
			b = b + a;
			a = b - a;
			printf("%d, ", b);
		}
	}
	printf("\n");
	return (0);
}
