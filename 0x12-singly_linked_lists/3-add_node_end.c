#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: list of element
 * @str: to be duplicated
 * Return: size_t
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int i;
	list_t *l, *end;

	l = malloc(sizeof(list_t));
	if (l == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(l);
		return (NULL);
	}
	for (i = 0; str[i];)
		i++;

	l->str = dup;
	l->len = i;
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
