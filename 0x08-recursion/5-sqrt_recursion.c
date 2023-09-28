#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - program 4
 * returnsthenatural square root of a number
 * @n: the number
 * Return: the length of string
 */

int _sqrt_recursion(int n)
{
	if (n % 1 != 0)
		return (-1);
	if (n == 0)
		return (0);

	return (_sqrt_recursion(n) +
			(_sqrt_recursion(n) + (n / _sqrt_recursion(n))) / 2);
}
