#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program 3
 * @argc: Number of arrgument
 * @argv: Array of arrgument
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
