#include "main.h"
#include <stdio.h>

/**
 * prime_number - verify if n%m=0
 * @n: the first number
 * @m: the second number
 * Return: 1 or 0
 */

int prime_number(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0)
		return (0);
	return (prime_number(n, m - 1));
}

/**
 * is_prime_number - program 4
 * return 1 if the number is prime
 * @n: the first number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (prime_number(n, n - 1));
}
