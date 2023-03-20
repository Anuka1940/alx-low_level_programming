#include "lists.h"
/**
 * get_dnodeint_at_index- pointer to a nth node on a link list
 * @head: pointer to the head of a double link list
 * @index: the index to be printed
 *
 * Return: A pointer to nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 1;
	dlistint_t *temp = head;


	while (i <= index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
