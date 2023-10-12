#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints numbers, followed by a new line
 *
 * @separator: separator
 * @n: parametre
 * Return: sum
 **/

void
print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *a;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, const char *);
		if (a)
			printf("%s", a);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
