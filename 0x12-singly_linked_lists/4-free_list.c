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

	while (head)
	{
		l = head->next;
		free(head->str);
		free(head);
		head = l;
	}
}
