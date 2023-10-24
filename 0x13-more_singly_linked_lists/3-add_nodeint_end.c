#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: list of element
 * @n: to be add
 * Return: size_t
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l, *end;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);

	l->n = n;
	l->next = NULL;

	if (*head == NULL)
		*head = l;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = l;
	}

	return (*head);
}
