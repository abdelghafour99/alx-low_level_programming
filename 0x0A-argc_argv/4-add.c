#include "main.h"
#include "1-isdigit.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Program 3
 * @argc: Number of arrgument
 * @argv: Array of arrgument
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int a, b, len, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[a];
			len = strlen(ptr);

			for (b = 0; b < len; b++)
			{
				if (_isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[a]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
