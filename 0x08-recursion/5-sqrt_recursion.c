#include "main.h"
#include <stdio.h>

/**
 * sqrt_ab - verify that n=m*m
 * @a: the first number
 * @b: the second number
 * Return: -1 or b
 */

int sqrt_ab(int a, int b)
{
	if (b == 1)
		return (-1);
	if (a == b * b)
		return (b);
	return (sqrt_ab(a, b - 1));
}

/**
 * _sqrt_recursion - program 4
 * returns the natural square root of a number
 * @n: the number
 * Return: squar of number
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n <= 0)
		return (-1);

	return (sqrt_ab(n, n - 1));
}
