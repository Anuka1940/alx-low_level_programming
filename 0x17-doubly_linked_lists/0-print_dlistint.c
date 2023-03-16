#include "lists.h"
/**
 * print_dlistint- print elements of a list
 * @h: pointer to the list
 *
 * Return: no of nodes always
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
