#include "main.h"
/**
 * _calloc- allocate memory using malloc
 * @nmemb: no elements of array
 * @size: size bytes of each elements
 *
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;
	void *ptr2;

	ptr2 = malloc(nmemb * size);
	if (ptr2 == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = ptr2;
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr2);
}
