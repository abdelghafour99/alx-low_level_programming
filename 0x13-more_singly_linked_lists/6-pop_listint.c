#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a list
 *
 * @head: list of element
 * Return: returns the head node’s data n
 **/

int pop_listint(listint_t **head)
{
	int a;
	listint_t *l = *head;

	if (l == NULL)
		return (0);

	a = l->n;
	l = l->next;
	*head = l;

	return (a);
}
