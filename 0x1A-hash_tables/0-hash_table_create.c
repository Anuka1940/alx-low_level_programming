#include "hash_tables.h"
/**
 *hash_table_create- creat a new hash table
 *@size: size of the hash table
 *
 *Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table =  malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = malloc(table->size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table->array);
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
