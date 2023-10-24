#include "main.h"
#include <stdio.h>
#include "2-strlen_recursion.c"

/**
 * is_palindrome - program 7
 * returns the length of a string
 * @s: the string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int a;

	a = _strlen_recursion(s);

	if (a < 2)
		return (0);

	if (s[a - 2] == s[a - 1])
		return (1);

	s++;
	s[a - 2] = '\0';
	return (is_palindrome(s));
}
