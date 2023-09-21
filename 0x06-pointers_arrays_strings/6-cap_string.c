#include "main.h"
#include <stdio.h>

/**
 * cap_string - change lowercase
 * letters of a string to uppercase.
 *
 *@a: pointer
 * Return: alwas a
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
			i++;
		if (a[i - 1] == '.' ||
			a[i - 1] == ',' ||
			a[i - 1] == ';' ||
			a[i - 1] == '.' ||
			a[i - 1] == '!' ||
			a[i - 1] == '?' ||
			a[i - 1] == '"' ||
			a[i - 1] == '(' ||
			a[i - 1] == ')' ||
			a[i - 1] == '{' ||
			a[i - 1] == '}' ||
			a[i - 1] == '\n' ||
			a[i - 1] == '\t' ||
			a[i - 1] == ' ' ||
			i == 0)
			a[i] = a[i] + 32;
		i++;
	}
	return (a);
}
