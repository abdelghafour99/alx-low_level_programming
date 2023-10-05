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
	char *str = NULL;
	unsigned int i;
	int N1, N2;
	int count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (N1 = 0; s1[N1] != '\0'; N1++)
		;
	for (N2 = 0; s2[N2] != '\0'; N2++)
		;
	str = (char *)malloc((N1 + N2 + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (; s2[count] != '\0'; i++)
	{
		str[i] = s2[count];
		count++;
	}

	return (str);
}
