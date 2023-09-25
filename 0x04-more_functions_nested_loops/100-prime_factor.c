#include "main.h"
#include <stdio.h>

/**
 * print_facteur - program 1
 *
 *@n: integer
 */

void print_facteur(int n)
{
	int a = 2, b, c, i;

	while (a <= n)
	{
		b = n % a;
		if (b == 0)
		{
			c = 1;
			for (i = 2; i < a; i++)
			{
				if (a % i == 0)
					c = 0;
			}
			if (c == 1)
			{
				printf("%d", a);
				printf("\n");
				n = n / a;
			}
		}
		else
			a++;
	}

}
