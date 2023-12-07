#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at the given index
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete
 *
 * Return: 1 - if success
 *         - 1 - else
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *l = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (l == NULL)
			return (-1);
		l = l->next;
	}

	if (l == *head)
	{
		*head = l->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		l->prev->next = l->next;
		if (l->next != NULL)
			l->next->prev = l->prev;
	}

	free(l);
	return (1);
}
