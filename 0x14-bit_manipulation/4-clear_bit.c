#include "main.h"
/**
 *clear_bit- change index of a byte
 *@n: address of a pointer
 *@index: size of index
 *
 *Return: return 1 or -1 always
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (n)
	{
		temp = 1 << index;
		if (*n & temp)
		{
			*n = *n ^ temp;
			return (1);
		}
		return (1);
	}
	return (-1);
}
