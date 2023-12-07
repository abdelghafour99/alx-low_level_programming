#include "lists.h"

/**
 * sum_dlistint - Sums all the element of a dlistint_t
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all element
 */
int sum_dlistint(dlistint_t *head)
{
	int S = 0;

	while (head)
	{
		S += head->n;
		head = head->next;
	}

	return (S);
}
