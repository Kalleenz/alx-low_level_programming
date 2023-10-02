#include "main.h"

/**
 * append_text_to_file - appending of texts to existing files
 * @filename: pointer to the filename
 * @text_content: the string of text to be added
 * Return: an integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l] != '\0'; l++)
		{
		}
	}
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	w = write(o, text_content, l);
	if (w == -1)
		return (-1);
	close(o);
	return (l);
}
