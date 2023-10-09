#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - creates an array of integers
 * using malloc
 *
 * @nmemb: the first integer
 * @size: the second integer
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(sizeof(char) * nmemb * size);

	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			str[i] = 0;
		return (str);
	}
	else
		return (NULL);
}
