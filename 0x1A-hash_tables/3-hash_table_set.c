#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *prev;
	hash_table_t *first = NULL;
	unsigned long int index_i, size = 1024;

	printf("1");
	first = ht;
	new_node = malloc(sizeof(hash_node_t));
	printf("1");
	if (new_node == NULL)
		return(0);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	index_i = key_index(key, size);
	if (first->array[index_i] == NULL)
		first->array[index_i] = new_node;
	else
		prev = first->array[index_i];
		while(TRUE)
		{
			if(prev->next == NULL)
			{
				prev->next = new_node;
				break;
			}
			prev = (prev->next);
		}
	return(1);
}
