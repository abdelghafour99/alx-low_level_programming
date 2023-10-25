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
	while (index != 0)
	{
		if (head == NULL)
			break;
		head = head->next;
		index--;
	}

	return (head);
}
