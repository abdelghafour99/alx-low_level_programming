#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @n: dest lentgh
 *@dest: the first string
 *@src: the second one
 * Return: Always ptr
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
