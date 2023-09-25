#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diag sum
 *
 *@a: the matrix
 *@size: the matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, n = 0;

	for (i = 0; i <= size; i++)
	{
		n += a[i][i];
	}

	printf("%d", n);
	printf("\n");
}
