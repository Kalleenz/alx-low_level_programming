#include "main.h"

/**
 * create_file - File creation
 * @filename: pointer to a filename
 * @text_content: pointer to the string of content
 * Return: an integer
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int o, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
		return (-1);
	w = write(o, text_content, len);
	if (w == -1)
		return (-1);
	close(o);
	return (len);
}
