#include "main.h"

/**
 * _strcat - Entry point concantenating two strings
 * @dest: destination
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; src[b] != '\0'; b++)
	{
		a++;
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
