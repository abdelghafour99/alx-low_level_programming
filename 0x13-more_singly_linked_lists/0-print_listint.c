#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 *
 * @h: list of element
 * Return: the number of nodes
 **/

size_t print_listint(const list_t *h)
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
