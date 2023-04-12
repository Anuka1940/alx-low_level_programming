#include "hash_tables.h"
/**
 * hash_table_get- funtion to get a value from a table using it key
 * @ht: table were the is stored
 * @key: hashed key to retrive the value
 *
 * Return: null or the key value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp && strcmp(temp->key, key) != 0)
	{
		temp = temp->next;
	}
	return ((temp == NULL) ? NULL : temp->value);
}
