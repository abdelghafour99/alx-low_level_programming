#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - program 4
 * returnsthenatural square root of a number
 * sqrt - verify that n=m*m
 * @n: the number
 * @m: the second number
 * Return: the length of string
 */

int sqrt(int n, int m)
{
	if (m == 1)
		return (-1);
	if (n == m * m)
		return (m);
	return (sqrt(n, m - 1));
}
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n <= 0)
		return (-1);

	return (sqrt(n, n - 1));
}
