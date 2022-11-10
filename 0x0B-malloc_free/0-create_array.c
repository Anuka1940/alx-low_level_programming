#include <stdio.h>
#include <stdlib.h>
/**
 *create_array-  pointer to array of char
 *@size: size of desired byte
 *@c: specific char element
 *
 *Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = size;
	char *p;

	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
