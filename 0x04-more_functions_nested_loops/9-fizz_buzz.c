#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * if the number is multiple of 3 print Fizz
 *
 * Return: 0
*/

int main(void)
{
	int a;

	printf("1");

	for (a = 2; a <= 100; a++)
	{
		printf(" ");
		if (a % 3 == 0)
			printf("Fizz");
		if (a % 5 == 0)
			printf("Buzz");
		if (a % 3 != 0 && a % 5 != 0)
			printf("%d", a);
	}
	return (0);
}
