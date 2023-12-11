#include "main.h"
#include <stdio.h>

/**
 * _strcmp - concatenates two strings
 *
 *@s1: the first string
 *@s2: the second one
 * Return: Always s1[a] - s2[a]
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}

	return (0);
}
