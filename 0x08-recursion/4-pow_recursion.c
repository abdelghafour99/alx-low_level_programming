#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - program 4
 * returnsthe value of x raised to the power of y
 * @x: the number
 * @y: the power
 * Return: the length of string
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	y--;
	return (x * _pow_recursion(x, y));
}
