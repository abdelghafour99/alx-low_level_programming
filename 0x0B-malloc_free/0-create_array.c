#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Null or str.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return ("NuLL");

	else
	{
		char *str;

		str = malloc(sizeof(c));
		return (str);
	}

}
