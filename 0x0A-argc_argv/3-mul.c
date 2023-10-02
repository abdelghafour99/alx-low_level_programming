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

	if (argc == 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
