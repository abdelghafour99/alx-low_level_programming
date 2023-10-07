#include "main.h"

/**
 * _islower - 1 or 0
 *
 * @c: the one be checked
 * Return: 1 if lowercase or 0 if not
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
