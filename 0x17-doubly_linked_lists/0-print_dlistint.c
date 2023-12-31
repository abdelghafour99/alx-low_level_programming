#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a dlist
 *
 * @h: dlist of element
 * Return: size_t
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}

	return (a);
}
