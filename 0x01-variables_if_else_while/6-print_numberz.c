#include <stdio.h>
/**
 * main - Entry point
 * description - printing base 10 with putchar
 * Return: 0 Success
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');
	}
	putchar('\n');
	return (0);
}
