#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: separator
 * @n: parametre
 * Return: sum
 **/

void
print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	printf("%d", va_arg(args, int));
	for (i = 0; i < n; i++)
		printf("%c %d", separator, va_arg(ap, int));
	va_end(ap);
	printf("\n");
	return (sum);
}
