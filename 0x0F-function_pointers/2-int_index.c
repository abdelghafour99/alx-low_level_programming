#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: the array
 * @size: the size of array
 * @cmp: a pointer to the function
 *
 * Return: Integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
