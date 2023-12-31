#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlist
 *
 * @head: list of element
 * @n: theelement to be add
 * Return: new dlistint
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *l;

	l = malloc(sizeof(dlistint_t));
	if (l == NULL)
		return (NULL);

	l->n = n;
	l->prev = NULL;
	l->next = *head;
	if (*head != NULL)
		(*head)->prev = l;

	*head = l;

	return (l);
}
