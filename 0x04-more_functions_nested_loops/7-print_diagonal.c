#include "main.h"
/**
 * print_diagonal- print nth (\) in diagonal
 * @n: number of times to print (\)
 */

void print_diagonal(int n)
{
	int i = 1, k = 0;
	char j = 32;

	while (i < n + 1)
	{
		while (k < i)
		{
			_putchar(j);
			k++;
		}
		if (k == i)
		{
			k = 0;
		}
		_putchar(92);
		_putchar(10);
		i++;
	}
}
