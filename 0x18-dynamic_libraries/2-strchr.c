#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 *@s: the first character
 *@c: the second one
 * Return: Always char
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
			return (&s[j]);
		j++;
	}
	return (0);
}
