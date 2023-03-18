#include "lists.h"
/**
 * dlistint_len-  returns the number of elements in a linked dlistint_t list
 * @h: pointer to list
 *
 * Return: n always
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
