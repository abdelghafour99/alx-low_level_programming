#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: PTR to STR of 0&1
 * Return: the number converted
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int len = strlen(b), c;

	if (b == NULL)
		return (a);

	while (len)
	{
		c = *b - '0';
		if (c == 1)
			a += pow(2, len);
		else if (c != 0)
			return (0);
		len--;
	}

	return (a);
}
