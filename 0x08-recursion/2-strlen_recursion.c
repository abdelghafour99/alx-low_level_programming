#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - program 2
 * returns the length of a string
 * @s: the string
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
