#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t
 * @head: The head of the dlistint_t giving
 * @index: The node to locate
 *
 * Return: NULL- If the node does not exist
 *         idx - the address of the located
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
