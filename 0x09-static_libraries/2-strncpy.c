#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy a string
 *
 * @n: dest lentgh
 *@dest: the first string
 *@src: the second one
 * Return: Always ptr
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
