#include "main.h"

/**
 * _isalpha - 1 or 0
 *
 * @c: the one be checked
 * Return: 1 if lowercase or 0 if not
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
