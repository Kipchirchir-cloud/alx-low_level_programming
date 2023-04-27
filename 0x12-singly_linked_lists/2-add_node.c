#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - beginning of a linked list
 * @head: pointer to the list_t list
 * @str: string to add to a node
 *
 * Return: new element, otherwise null.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

