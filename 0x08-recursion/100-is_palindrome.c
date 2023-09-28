#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - program 7
 * returns the length of a string
 * @s: the string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);
	if (s[0] == ' ')
		return (0);

	s++;
	return (is_palindrome(s));
}
