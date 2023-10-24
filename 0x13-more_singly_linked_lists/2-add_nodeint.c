#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: list of element
 * @n: to be duplicated
 * Return: size_t
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);

	l->n = n;
	l->next = *head;

	*head = l;

	return (l);
}
