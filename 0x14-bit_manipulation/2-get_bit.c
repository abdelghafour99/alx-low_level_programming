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
	int Arr[100];
	unsigned int i = 0;

	while (n > 0)
	{
		Arr[i] = n % 2;
		n = n / 2;
		i++;
	}
	if ((index > i) || (index < 0))
		return (-1);
	return (Arr[index]);
}
