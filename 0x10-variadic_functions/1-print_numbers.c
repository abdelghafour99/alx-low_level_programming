#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: separator
 * @n: parametre
 *
 **/

void
print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n > 0)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != n - 1  && separator != NULL)
				printf("%s", separator);
		}

		va_end(ap);
	}
	printf("\n");
}
