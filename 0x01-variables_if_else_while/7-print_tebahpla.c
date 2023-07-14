#include <stdio.h>
/**
 * main - Entry point
 * description - printing lower cases in reverse
 * Return: 0 Success
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
