#include "main.h"
#include <stdio.h>

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 *
 * @n: the number giving
 * @index: the index of bit
 *
 * Return: 1 or 0 or -1
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
