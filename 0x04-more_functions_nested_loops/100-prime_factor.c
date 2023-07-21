#include <stdio.h>
#include <math.h>

/**
 * main - printing the largest prime factor
 * Return: 0
 */

int main(void)
{
	long int n;
	long int large;
	long int m;

	n = 612852475143;
	large = -1;

	while (n % 2 == 0)
	{
		large = 2;
		n /= 2;
	}

	for (m = 3; m <= sqrt(n); m = m + 2)
	{
		while (n % m == 0)
		{
			large = m;
			n = n / m;
		}
	}
	if (n > 2)
	{
		large = n;
	}
	printf("%ld\n", large);
	return (0);
}
