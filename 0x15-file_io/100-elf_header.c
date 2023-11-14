#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: number of arguments
 * @argv: Pointer to array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int f_from, f_to;
	int n = 1024, m = 0;
	char bf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(f_from), exit(99);
	}
	while (n == 1024)
	{
		n = read(f_from, bf, 1024);
		if (n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
		m = write(f_to, bf, n);
		if (m < n)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(f_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from), exit(100);

	if (close(f_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to), exit(100);

	return (0);
}
