#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: the string given
 *
 * Return: Null or str.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	len++;
	s = (char *)malloc(sizeof(char) * lrn);

	if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			s[i] = str[i];
	}
	else
		return (NULL);

	s[i] = '\0';
	return (s);

}
