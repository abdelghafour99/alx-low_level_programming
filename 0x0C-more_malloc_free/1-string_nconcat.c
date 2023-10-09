#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - concatenates two strings
 * using malloc
 *
 * @s1: the first String
 * @s2: the second String
 * @n: the number of element
 * Return: a pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int lena = 0, lenb = 0, i = 0;

	while (s1[lena] != '\0')
		lena++;
	while (s1[lenb] != '\0')
		lenb++;

	str = malloc(sizeof(char) * (lena + lenb + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str[lena + i] = s2[i];

	str[lena + i] = '\0';
	return (str);
}
