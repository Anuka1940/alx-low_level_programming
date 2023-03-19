#include "lists.h"
/**
 * free_dlistint- free a double link list
 * @head: pointer to head of a link list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
