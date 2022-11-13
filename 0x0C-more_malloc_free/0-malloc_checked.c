/**
 *malloc_checked- function allocate memory
 *@b: size of memory to allocated
 *
 *Return: return pointer alway
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(b));
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
