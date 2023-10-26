#include "main.h"
#include <stdio.h>

/**
 * clear_bit -  clear the value of a bit at a given index
 *
 * @n: the number giving
 * @index: the index of bit
 *
 * Return: 1 or -1
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n ^ i);

	return (1);
}
