#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n) of a list
 *
 * @head: list of element
 * Return: the sum
 **/

int sum_listint(listint_t *head)
{
	int a = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		a += head->n;
		head = head->next;
	}

	return (a);
}
