#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c : the caracter checks
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);

}
