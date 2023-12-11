#include "main.h"
#include <stdio.h>

/**
 * _memcpy - program 14
 *
 * @dest: the first string
 *@src: the destination
 *@n: number of bytes to be changed
 * Return: Always dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
