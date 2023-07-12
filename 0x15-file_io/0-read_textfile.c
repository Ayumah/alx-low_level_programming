#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: variable pointer
 * @letters: size letters
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, f_read, f_write;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(buffer);
		return (0);
	}

	f_read = read(fp, buffer, letters);

	f_write = write(STDOUT_FILENO, buffer, f_read);

	close(fp);

	return (f_write);
}
