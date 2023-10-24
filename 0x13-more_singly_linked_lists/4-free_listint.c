#include "lists.h"
#include <stdio.h>

/**
 * free_listint - function that frees a list
 *
 * @head: list of element
 **/

void free_listint(listint_t *head)
{
	listint_t *l;

	while ((l = head) != NULL)
	{
		head = head->next;
		free(l);
	}
}
