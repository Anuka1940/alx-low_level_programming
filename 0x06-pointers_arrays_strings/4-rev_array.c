#include "main.h"
/**
 * reverse_array - reverse content of array
 * @a: pointer to array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int temp =  0, i = 0, l = n - 1;

	for (; i < (n / 2); i++, l--)
	{
		temp = *(a + i);
		*(a + i) = *(a + l);
		*(a + l) = temp;
	}
}
