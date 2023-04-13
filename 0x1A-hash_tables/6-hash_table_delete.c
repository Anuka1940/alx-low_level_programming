#include "hash_tables.h"
/**
 * hash_table_delete- delete hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *table = ht;
	hash_node_t *temp1, *temp2;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp1 = ht->array[i];
			while (temp1 != NULL)
			{
				temp2 = temp1->next;
				free(temp1->key);
				free(temp2->value);
				free(temp1);
				temp1 = temp2;
			}
		}
	}
	free(table->array);
	free(table);
}
