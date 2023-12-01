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
	listint_t *nod, *lead;
	unsigned int i = 1;

	if (head)
	{
		nod = malloc(sizeof(listint_t));
		if (nod == NULL)
			return (NULL);

		nod->n = n;
		if (idx > 0)
		{
			lead = *head;
			while (lead)
			{
				if (i == idx)
				{
					nod->next = lead->next;
					lead->next = nod;
					return (nod);
				}
				lead = lead->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			nod->next = *head;
			*head = nod;
		}
		return (nod);
	}
	return (NULL);
}
