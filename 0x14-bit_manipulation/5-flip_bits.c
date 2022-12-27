#include "main.h"
/**
 *countset_bit- count number of bits to flip
 *@n: count number of flip
 *
 *Return: return count always
 */
int countset_bit(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
/**
 *flip_bits- returns total flips
 *@n: n bit to be flipped
 *@m: m bit to be flipped
 *
 *Return: 1 or 0 always
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countset_bit(n ^ m));
}
