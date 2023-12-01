#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - adds a new node at the beginning of a list
 *
 * @head: list of element
 * @n: to be add
 * @idx: the index where n will be add
 * Return: listint
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *l = *head;
	listint_t *m;
	int Ar[40];
	int j = 0, i = 0;

	m = malloc(sizeof(listint_t));
	if (m == NULL)
		return (NULL);

	while (idx != 0)
	{
		if (l == NULL)
			return (NULL);

		Ar[i] = l->n;
		l = l->next;
		idx--;
		i++;
	}
	while (j != i)
	{
		m->n = Ar[j];
		m->next = NULL;
		j++;
	}
	m->n = n;
	m->next = l;

	return (m);
}
