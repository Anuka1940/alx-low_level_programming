#include "lists.h"
/**
 * add_dnodeint_end- add a new node to the end of a list
 * @head: pointer to a pointer(head) to a list
 * @n: int to be stored on list
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		temp = *head;
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	temp = *head;
	for (; temp->next != NULL; temp = temp->next)
		;

	if (temp->next == NULL)
	{
		new->n = n;
		new->prev = temp;
		temp->next = new;
		new->next = NULL;
	}
	return (new);
}



