#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return(NULL);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return(*head);
	}
	else
	{
		temp = *head;
		new->n = n;
		temp->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
