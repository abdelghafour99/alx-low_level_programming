#include <time.h>
#include <stdio.h>
/**
 * main - Prints all possible combinations of tow digit
 *        followed by a new line
 *
 * Return: Always 0
*/

int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b < a; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 9 &)
				continue;

			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
