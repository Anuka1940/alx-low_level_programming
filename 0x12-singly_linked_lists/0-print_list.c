#include "lists.h"
/**
 *print_list- prints the no of nodes
 *@h: pointer to list_t of type struct
 *
 *Return: return int or error massage
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] %p\n", ptr->str);
			ptr = ptr->next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
			i++;
		}
	}
	return (i);
}
