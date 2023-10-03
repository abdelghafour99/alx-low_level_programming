#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - program11
 *
 *@s: the first character
 *@accept: the second one
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
