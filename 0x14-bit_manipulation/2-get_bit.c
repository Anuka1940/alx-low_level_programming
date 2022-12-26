/**
 *get_bit-convert to binary
 *@n:unsighned long int
 *@index: size of index
 *
 *Return: 1 or 0 always
 **/
#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	b = n >> index;
	if (b & 1)
		return (1);
	else if ((b & 1) == 0)
		return (0);
	else
		return (-1);
}
