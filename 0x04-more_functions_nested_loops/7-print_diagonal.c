#include "main.h"

/**
 * print_diagonal - prin diagonal \
 *
 *
 *@n: the numberof line
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			a = b;
			while (a > 0)
			{
				_putchar(' ');
				a--;
			}
			_putchar(92);
		}
	}
	_putchar('\n');
}
