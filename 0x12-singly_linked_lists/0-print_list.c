#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list
 *
 * @h: list of element
 * Return: size_t
 **/

size_t print_list(const list_t *h)
{
	size_t a = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		a++;
		h = h->next;
	}

	return (a);
}
