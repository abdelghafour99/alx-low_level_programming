#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number giving
 * @index: the index of bit
 *
 * Return: 1 or 0 or -1
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a = 0;

	if (n == 0 && index <= 63)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}

	return (-1);
}
