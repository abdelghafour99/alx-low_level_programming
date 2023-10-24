#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 *
 * @h: list of element
 * Return: the number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}

	return (a);
}
