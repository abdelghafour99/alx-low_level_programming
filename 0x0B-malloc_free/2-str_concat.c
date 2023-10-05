#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1 : the first String
 * @s2 : the second String
 *
 * Return: Null or str.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s = (char *)malloc(sizeof(s1) + sizeof(s2));

	while (s1[i] != '\0')
	{
	       s[i] = s1[i];
	       i++;
	}

	s[i] = '\0';

	while (s2[j] != '\0' && s[i] != '\0')
	{
		s[i] = s2[j];
		s1[j] = s2[j];
		s2[j] = s[j];
		i += j;
		j++;
	}

	return (s);

}
