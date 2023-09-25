#include "main.h"
#include <stdio.h>

/**
 * _strspn - that gets the length of a prefix substring
 *
 *@s: the first string
 *@accept: the second one
 * Return: Always n
 */

unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i, n = 0;


	while (accept[j] != '\0')
	{
		i = 0;
		while (s[i] != '\0')
			{
				if (accept[j] == s[i])
					n++;
				i++;
			}
		j++;
	}

	return (n);
}
