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

	va_start(ap, n);
	if (separator != NULL)
	{
	printf("%s", va_arg(ap, const char*));
	for (i = 1; i < n; i++)
	{
		if (va_arg(ap, const char*) != NULL)
			printf("%s%s", separator, va_arg(ap, const char *));
		else
			printf(" nil");
	}
	}
	va_end(ap);
	printf("\n");
}
