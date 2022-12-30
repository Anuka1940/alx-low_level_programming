#include "lists.h"
/**
 *list_len- returns the no of elements
 *@h: pointer to list_t of type struct
 *
 *Return: return int or error massage
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			ptr = ptr->next;
			i++;
		}
		else
		{
			ptr = ptr->next;
			i++;
		}
	}
	return (i);
}
