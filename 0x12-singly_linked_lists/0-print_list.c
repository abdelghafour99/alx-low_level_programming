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

	while (h)
	{
		a++;
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h= h->next;
	}

	return (a);
}
