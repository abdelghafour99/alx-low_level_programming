#include "main.h"
#include <stdio.h>

/**
 * _puts - the length of a string
 *
 * @str: the number check
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');

}
