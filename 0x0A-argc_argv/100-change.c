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
	int a = 0, m = 0;

	if (argc != 2)
	{
		printf("0\n");
		return (1);
	}
	m  = atoi(argv[1]);
	while (m > 0)
	{
		if (m >= 25)
		{
			m -= 25;
			a++;
		}
		else if (m >= 10)
		{
			m -= 10;
			a++;
		}
		else if (m >= 5)
		{
			m -= 5;
			a++;
		}
		else if (m >= 2)
		{
			m -= 2;
			a++;
		}
		else
		{
			m -= 1;
			a++;
		}
	}
	printf("%d\n", a);
	return (0);
}
