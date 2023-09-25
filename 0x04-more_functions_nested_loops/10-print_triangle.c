#include "main.h"

/**
 * print_triangle - prin triangle
 *
 *
 *@size: the numberof line
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (b = 1; b <= size; b++)
		{
			a = size - b;
			c = b;
			while (a > 0)
			{
				_putchar(' ');
				a--;
			}
			while (c > 0)
			{
				_putchar('#');
				c--;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
