#include "main.h"
#include <stdio.h>

/**
 * _strlen - the length of a string
 *
 * @s: the number check
 * Return: len(S)
 */
int _strlen(char *s)
{
	int a;

	while (*s != '\0')
	{
		a++;
		s++;
	}

	return (a);
}
