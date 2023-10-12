#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_all - prints everything
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 */

void
print_all(const char * const format, ...)
{
	va_list ap;
	int n = 0, i = 0;
	char *separator = ", ";
	char *str;

	va_start(ap, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			separator = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(ap, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), separator);
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, separator);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(ap);
}
