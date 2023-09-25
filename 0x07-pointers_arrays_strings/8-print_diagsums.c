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
	int i, m = 0, n = 0;

	for (i = 0; i < size; i++)
	{
		n += a[i * size + i];
		m += a[i * size + (size - 1 - i)];
	}

	printf("%d, ", n);
	printf("%d", m);
	printf("\n");
}
