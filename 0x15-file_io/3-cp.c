#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - main entry point to copy file a file to another
 * @argc: argument count
 * @argv: argument vectors
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	int r, w, file_from, file_to;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(file_to, buff, r);
		if (file_to == -1 || w == 1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(file_from, buff, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buff);
	close_now(file_from);
	close_now(file_to);

	return (0);
}

/**
 * buffer - function to allocate a memory of 1024 bytes
 * @file: file that is been allocated a space
 * Return: a pointer
 */
char *buffer(file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_now - function to close files
 * @fd: file descriptor
 */
void close_now(fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n, fd);
		exit(100);
	}
}
