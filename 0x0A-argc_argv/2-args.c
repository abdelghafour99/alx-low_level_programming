#include "main.h"
#include <stdio.h>

/**
 * main - program0
 *
 * @argc: number of agrument
 * @argv: array of arrguments
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
