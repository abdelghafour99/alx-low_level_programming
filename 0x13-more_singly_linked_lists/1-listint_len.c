#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements of a list
 *
 * @h: list of element
 * Return: the number of nodes
 **/

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
