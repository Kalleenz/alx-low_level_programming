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
	char cent;
	int coins[] = {25, 10, 5, 2, 1};
	int coin = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	int num = 0;

	for (i = 0; i < coin; i++)
	{
		if (cent > 0)
		{
			num += cent / coins[i];
			cent = cent % coins[i];
		}
	}
	printf("%d\n", num);
	return (0);
}
