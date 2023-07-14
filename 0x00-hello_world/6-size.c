#include <stdio>

/**
 * main - This contains the sizes of different data types
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int n;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(n));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
