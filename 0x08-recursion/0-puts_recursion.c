#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - program 0
 * prints a string, followed by a new line
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		printf("\n");
	}
	printf("%c", *s);
	s++;

	_puts_recursion(s);
}
