#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appending texts to existing files
 * @filename: pointer to the name of a file
 * @text_content: text or string to be added to the file
 * Return: an integer 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w;
	int l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l] != '\0'; l++)
		{
		}
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	w = write(f, text_content, l);
	if (w == -1)
		return (-1);
	close(f);

	return (1);
}
