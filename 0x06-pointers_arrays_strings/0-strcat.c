#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 *@dest: the first string
 *@src: the second one
 * Return: Always ptr
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		i += j;
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
