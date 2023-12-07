#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlist
 *
 * @head: list of element
 * @n: theelement to be add
 * Return: new dlistint
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *l, *m;

	l = malloc(sizeof(dlistint_t));
	if (!l)
		return (NULL);

	l->next = NULL;
	l->prev = NULL;
	l->n = n;

	if (!*head)
		*head = l;
	else
	{
		m = *head;
		while (m->next != NULL)
		{
			m = m->next;
			m->next = l;
			l->next = m;
		}
	}
	return (l);
}
