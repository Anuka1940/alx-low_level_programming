#include "hash_tables.h"
/**
 * hash_table_set- function that insert in the hash table
 *
 * @ht: the hash table to be insert in
 * @key: the key string to be used to hash
 * @value: the value to be save to in the key
 * Return: 1 for successful and 0 for unsuccessful
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index_i;
	char *duplicate;

	if (value == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	duplicate = strdup(value);
	if (duplicate == NULL)
		return (0);

	new_node->value = duplicate;
	new_node->key = strdup(key);
	index_i = key_index((const unsigned char *)key, ht->size);
	new_node->next = ht->array[index_i];
	ht->array[index_i] = new_node;

	return (1);
}
