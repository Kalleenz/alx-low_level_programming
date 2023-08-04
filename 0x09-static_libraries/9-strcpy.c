#include "main.h"

/**
 * _strcpy - copying strings
 * @dest: pointer one
 * @src: pointer two
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for (; n < m; n++)
	{
		dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
