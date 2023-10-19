#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: list of element
 * @str: to be duplicated
 * Return: size_t
 **/

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int i;
	list_t *l;

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
		len++;

	new->str = dup;
	new->i = i;
	new->next = *head;

	*head = new;

	return (l);
}
