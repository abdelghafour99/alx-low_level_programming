#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function...
 * ..given as a parameter on each element of an array
 * @array: the array
 * @size: the size of array
 * @action: a pointer to the function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
