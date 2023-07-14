#include <stdio.h>
/**
 * main - Entry point
 * description - Getting upper and lower case alphabets
 * Return: 0 (Success)
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		putchar(let);
	}
	for (let = 'A'; let <= 'Z'; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
