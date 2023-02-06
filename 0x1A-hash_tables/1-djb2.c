#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: size value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int size;
	int c;

	size = 5381;
	while ((c = *str++))
	{
		size = ((size << 5) + size) + c; /* hash * 33 + c*/
	}
	return (size);
}
