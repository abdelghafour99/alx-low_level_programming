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
	int a = 0;
	listint_t *lead;

	if (*head != NULL)
	{
		lead = (*head)->next;
		a = (*head)->n;
		free(*head);
		*head = lead;
	}
	return (a);
}
