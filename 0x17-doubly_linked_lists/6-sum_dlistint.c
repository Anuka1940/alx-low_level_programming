#include "lists.h"
/**
 * sum_dlistint- sum the store digits in a double link list
 * @head: pointer to the head of a double link list
 *
 * Return: sum always
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
