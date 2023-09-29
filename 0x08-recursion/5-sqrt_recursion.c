#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - program 4
 * returnsthenatural square root of a number
 * sqrt - verify that n=m*m
 * @n: the number
 * @a: the first number
 * @b: the second number
 * Return: the length of string
 */

int sqrt_ab(int a, int b)
{
	if (b == 1)
		return (-1);
	if (a == b * b)
		return (b);
	return (sqrt_ab(a, b - 1));
}
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n <= 0)
		return (-1);

	return (sqrt_ab(n, n - 1));
}
