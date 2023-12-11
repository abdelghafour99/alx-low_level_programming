#include "main.h"
#include <stdio.h>

/**
 * _memset - program 0
 *
 * @s: the first string
 *@b: the destination
 *@n: number of bytes to be changed
 * Return: Always s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}

	return (s);
}
