#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - function to create a file
 * @filename: pointer to the files
 * @text_content: a string to be written in the file
 * Return: an integer
 */
int create_file(const char *filename, char *text_content)
{
	int f, w;
	int l = 0;

	if (filename == NULL)
		return (-1);
	for (l = 0; text_content[l] != '\0'; l++)
	{
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	w = write(f, text_content, l);
	if (w == -1)
		return (-1);
	close(f);
	return (1);
}
