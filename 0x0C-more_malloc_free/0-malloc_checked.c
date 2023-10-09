#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memories
 * using malloc
 *
 * @b: the integer givin
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(sizeof(int) * b);
	if (str == NULL)
		return (char*)"98";
	return (str);
}
