#include "main."
/**
 *set_bit- change index of a byte
 *@n: address of a pointer
 *@index: size of index
 *
 *Return: return 1 or -1 always
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (n)
	{
		temp = 1 << index;
		*n = *n | temp;
		return (1);
	}
	else
	{
		return (-1);
	}
}
