#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - program 0
 * prints a string in reverse
 * @s: the string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		printf("%c", *s);
		_puts_recursion(s - 1);
	}
	else
		printf("\n");
}
