#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - function that frees a list
 *
 * @head: list of element
 **/

void free_listint2(listint_t **head)
{
	listint_t *l = *head;
	listint_t *m;

	while (l != NULL)
	{
		m = l->next;
		free(l);
		l = m;
	}
	free(m);
	*head = NULL;
}
