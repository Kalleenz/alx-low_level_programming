#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reading and printing a file to the standard output
 * @filename: pointer to the name of the file
 * @letters: number of letters to be read and printed
 * Return: number of letters that was read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, r, w;
	char *let;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	let = malloc(sizeof(char) * letters);
	if (let == NULL)
		return (NULL);

	r = read(f, let, letters);
	w = write(STDOUT_FILENO, let, t);
	free(let);
	close(f);
	return (w);
}
