#include <time.h>
#include <stdio.h>
/**
 * main - Prints all possible combinations of two-two digit
 *        followed by a new line
 *
 * Return: Always 0
*/

int main(void)
{
	int a, b, c, d, c2;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a;
			while (c <= 9)
			{
				if (c2 == 9)
				{ d = b + 1; }
				else
				{ d = 0; }
				while (d <= 9)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(' ');
					putchar((c % 10) + '0');
					putchar((d % 10) + '0');
					d++;
					c2 = d;

					if (a >= 9 && b >= 8 && c >= 9 && d >= 9)
						continue;

					putchar(',');
					putchar(' ');
				}
				c++;
			}

		}

	}

	putchar('\n');

	return (0);
}