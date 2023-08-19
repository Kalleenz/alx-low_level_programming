#include "3-calc.h"

/**
 * op_add - addition of two integers
 * @a: first integer
 * @b: second integer
 * Return: an integer
 */
int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}

/**
 * op_sub - subtraction of two integers
 * @a: first integer
 * @b: second integer
 * Return: an integer
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - multiplication of two integers
 * @a: first integer
 * @b: second integer
 * Return: an integer
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - division of two integers
 * @a: first integer
 * @b: second integer
 * Return: an integer
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - remainder of two integers
 * @a: first integer
 * @b: second integer
 * Return: an integer
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
