#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits
 *             need to flip to get from one number to another
 *
 * @n: the first number giving
 * @m: the seconde one
 *
 * Return: always i
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}

	return (i);
}
