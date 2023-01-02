#include "lists.h"
/**
 *add_node_end- add new node to the end of list
 *@head: pointer to address of head
 *@str: pointer to const string
 *
 *Return: return pointer to new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	if (temp->str != new->str)
	{
		temp->next = new;
		return (new);
	}
	return (new);
}

