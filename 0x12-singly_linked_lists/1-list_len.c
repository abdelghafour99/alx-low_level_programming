#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: list of element
 * Return: size_t
 **/

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
