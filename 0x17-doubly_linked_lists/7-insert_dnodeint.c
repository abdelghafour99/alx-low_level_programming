#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new element in a dlistint_t
 *                            at the givin position
 * @h: A pointer to the head of the dlistint_t
 * @idx: The position to insert the new elemnt
 * @n: The integer for the new node to be contain
 *
 * Return: NULL - If the function fails
 *         Other - the address of the new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *l = *h, *m;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		l = l->next;
		if (l == NULL)
			return (NULL);
	}

	if (l->next == NULL)
		return (add_dnodeint_end(h, n));

	m = malloc(sizeof(dlistint_t));
	if (m == NULL)
		return (NULL);

	m->n = n;
	m->prev = l;
	m->next = l->next;
	l->next->prev = m;
	l->next = m;

	return (new);
}
