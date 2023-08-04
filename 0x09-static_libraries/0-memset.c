#include "main.h"

/**
 * _memset - filling a memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte
 * @n: number of spaces to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
