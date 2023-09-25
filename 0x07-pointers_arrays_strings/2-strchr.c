#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 *@s: the first character
 *@c: the second one
 * Return: Always ptr
 */

char *_strchr(char *s, char c)
{
	int j = 0, i = 0;
	char *R;

	R = s;

	while (s[j] != '\0')
	{
		if (s[j] == c)
			break;
		j++;
	}

	while (s[j] != '\0')
	{
		R[i] = s[j];
		j++;
		i++;
	}
	R[i] = '\0';

	return (R);
}
