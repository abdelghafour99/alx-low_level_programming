#include "lists.h"
#include <stdio.h>

/**
 * free_list - function that frees a list
 *
 * @head: list of element
 **/

void free_list(list_t *head)
{
	list_t *l;

	while ((l = head) != NULL)
	{
		head = head->next;
		free(l->str);
		free(l);
	}
}
