#include "hash_tables.h"
/**
 * hash_table_print- to print all the keys and values in a hash table
 * @ht: the hash table to be print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i, flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			for (temp = ht->array[i]; temp != NULL; temp = temp->next)
			{
				printf("'%s' : '%s'", temp->key, temp->value);
				if (temp->next != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
