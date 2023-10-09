#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - creates an array of integers
 * using malloc
 *
 * @min: the first integer
 * @max: the second integer
 * Return: a pointer to the allocated memory
 */

void *array_range(int min, int max)
{
	char *str;
	unsigned int i, j;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(int) * ((max - min) + 1));

	if (str != NULL)
	{
		for (i = min; i <= max; i++)
		{
			str[j] = i;
			j++;
		}
		return (str);
	}
	else
		return (NULL);
}
