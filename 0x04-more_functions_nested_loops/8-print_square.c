#include "main.h"

/**
 * print_square - prin square \
 *
 *
 *@size: the numberof square
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			a = size;
			while (a > 0)
			{
				_putchar('#');
				a--;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
