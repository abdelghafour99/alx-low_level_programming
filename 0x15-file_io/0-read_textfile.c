#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * ________________it to the POSIX standard output
 * @filename: variable pointer
 * @letters: number of letters it should read and print
 *
 *
 * Return: Always 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fl, a, b;
	char *car;

	car = malloc(letters);

	if (filename == NULL)
		return (0);
	if (car == NULL)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
	{
		free(car);
		return (0);
	}

	a = read(fl, car, letters);

	b = write(STDOUT_FILENO, car, a);

	close(fl);

	return (b);
}
