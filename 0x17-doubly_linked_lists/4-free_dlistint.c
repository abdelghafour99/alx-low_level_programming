#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - function that frees a dlist
 *
 * @head: dlist of element
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *l;

	while (head)
	{
		l = head->next;
		free(head);
		head = l;
	}
}
