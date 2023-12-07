#include "lists.h"
#include <stdio.h>
/**
 * print_list - returns the number of elements a dlist
 *
 * @h: dlist of element
 * Return: size_t
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
