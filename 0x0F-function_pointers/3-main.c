#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: an integer
 */
int main(int argc, char **argv)
{
	char *sign;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	sign = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (sign[1] != '\0' || get_op_func(sign) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*sign == '/' && num2 == 0) || (*sign == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(sign)(num1, num2));
	return (0);
}
