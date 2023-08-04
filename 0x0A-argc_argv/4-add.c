#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point for addition
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *p = argv[i];

		for (j = 0; p[j] != '\0'; j++)
		{
			if (!isdigit(p[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(p);
	}
	printf("%d\n", add);
	return (0);
}

