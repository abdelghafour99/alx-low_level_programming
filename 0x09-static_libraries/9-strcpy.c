#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy a string
 *
 *@dest: the first string
 *@src: the second one
 * Return: Always ptr
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
