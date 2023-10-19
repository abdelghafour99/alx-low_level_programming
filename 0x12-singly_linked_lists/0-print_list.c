#include <stdarg.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list
 *
 * @h: list of element
 * Return: size_t
 **/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (n);
	}

	while (h)
	{
		n++;
		if (h->n == NULL)
			printf("[0] (nil)");
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
