#include "lists.h"
/**
 *add_node- add a new node at the begining
 *@head: pointer to a pointer head
 *@str: pointer to a string
 *
 *Return: address of new pointer to head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;
	new->next = ptr;
	return (*head);
}

