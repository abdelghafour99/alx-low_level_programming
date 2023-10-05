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
		return (NULL);

	char *str;

	str = malloc(sizeof(str) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0;; i < size; i++)
		str[i] = c

	return (str);


}
