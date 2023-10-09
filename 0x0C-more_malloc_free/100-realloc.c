#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _realloc - reallocates a memory block
 * using malloc and free
 *
 * @ptr: the first element
 * @old_size: the second
 * @new_size: the third
 * Return: a pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int i, b;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		a = malloc(new_size);
		b = old_size ;
		if (old_size > new_size)
			b = new_size;
		if (a != NULL)
		{
			for (i = 0; i < b; i++)
				*((char *)a + i) = *((char *) ptr + i);
			free(ptr);
			return (a);
		}
		else
			return (NULL);
	}
}
