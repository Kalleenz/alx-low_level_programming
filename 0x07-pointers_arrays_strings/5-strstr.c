#include "main.h"

/**
 * _strstr - entry point for the first corresponding string
 * @haystack: string to be looked at
 * @needle: string to be searched for
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		for (; *a == *b && *b != '\0'; a++, b++)
		{
		}
		if (*b == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
