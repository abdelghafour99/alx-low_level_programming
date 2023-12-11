#include "main.h"
#include <stdio.h>

/**
 * _isalpha - program_2
 *
 * @c: the number check
 * Return:1
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);

}
