#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *prev;
	dlistint_t *next;
	dlistint_t **temp = **head;
       	temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return(NULL);
	}
	new->n = n;
	*temp->prev =new;
	new->next = head;
	new->prev = NULL;
dlistint_t **headdlistint_t **head	head = new;

	return (new);
}
