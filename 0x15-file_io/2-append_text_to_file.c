#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - that appends text at the end of a file
 *
 * @filename: is the name of the file to
 * @text_content: string to write to the file
 *
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a = 0, fl;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[a] != '\0')
	{
		a++;
	}

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	write(fl, text_content, a);

	return (1);
}
