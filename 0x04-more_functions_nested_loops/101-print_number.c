#include "main.h"
#include <stdio.h>

/**
 * print_number - program 1
 *
 *@n: number of elemnt
 */

void print_number(int n)
{
	int a[20];
	int i = 0, b = 0, c = 1;

	if (n < 0)
	{
		c = n;
		n = (0 - 1) * n;
	}
	while (n / 10 >= 1)
	{
		a[b] = n % 10;
		n /= 10;
		b++;
	}
	a[b] = n;

	if (c < 0)
		_putchar('-');

	for (i = b; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}

}
