#include "lists.h"
/**
 *free_list- free all nodes in a list
 *@head: pointer to the first node of list
 *
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *ptr;

	while (temp != NULL)
	{
		ptr = temp;
		temp = temp->next;
		free(ptr);
	}
}

