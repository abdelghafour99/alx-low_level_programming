#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 *
 * @head: list of element
 * @index: the Nth Node
 * Return: listin
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *l;

	while (l != NULL && index != 0)
	{
		l = head->next;
		free(head);
		head = l;
		index--;
	}


	return (head);
}
