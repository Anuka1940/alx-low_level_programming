#include "hash_tables.h"
/**
 *key_index- gives the index of a hash value
 *@key: string use to generate the hash value
 *@size: size of hash table
 *
 *Return: index of hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_k, index;

	index_k = hash_djb2(key);
	index = index_k % size;
	return (index);
}
