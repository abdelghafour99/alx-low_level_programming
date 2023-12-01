#include "main.h"
#include <stdio.h>
#include "2-strlen_recursion.c"

/**
 * is_palindrom - compares string vs string reverse
 * @s: string
 * @i: length
 *
 * Return: On success 1.
 *	   -1 if not is returned
 */
int is_palindrom(char *s, int i)
{
	if (*s != *(s + i))
		return (0);
	else if (*s == 0)
		return (1);
	return (is_palindrom(s + 1, i - 2));
}

/**
 * is_palindrome -function checks if a String is palindrome
 *
 * @s: the string checking
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int a;

	a = _strlen_recursion(s) - 1;
	return (is_palindrom(s, a));
}
