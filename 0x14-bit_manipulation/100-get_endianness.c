#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 *
 *
 *
 *
 * Return: always i
 **/

int get_endianness(void)
{
	unsigned int i = 1;
	char *s;

	s = (char *) &i;

	return ((int)*s);
}
