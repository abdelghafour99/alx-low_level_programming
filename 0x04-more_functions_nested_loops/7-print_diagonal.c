#include "main.h"

/**
 * print_diagonal - prin diagonal \
 *
 *
 *@n: the numberof line
 */
void print_diagonal(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
	}
	_putchar('\n');
}
