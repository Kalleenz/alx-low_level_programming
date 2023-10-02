#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>

/**
 * read_textfile - read and print a text file
 * @filename: pointer to filename
 * @letters: number of letters
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *temp;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (-1);
	r = read(o, temp, letters);
	w = write(STDOUT_FILENO, temp, r);
	free(temp);
	close(o);
	return (w);
}
