#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: integers
 */

int main(int argc, char *argv[])
{
	int i;
	int num = 0;
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int coin = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < coin; i++)
	{
		if (cents > 0)
		{
			num += cents / coins[i];
			cents = cents % coins[i];
		}
	}
	printf("%d\n", num);
	return (0);
}
