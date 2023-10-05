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
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		s = (char *)malloc(size * sizeof(char));
		if (s != NULL)
		{
			for (i = 0; i < size; i++)
				s[i] = c;
		}
	}
	return (s);

}
