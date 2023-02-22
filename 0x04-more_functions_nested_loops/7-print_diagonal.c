#include "main.h"
/**
 * print_diagonal- print nth (\) in diagonal
 * @n: number of times to print (\)
 */

void print_diagonal(int n)
{
	int i = 1, k = 0;

	if (n <= 0)
	{
		_putchar(10);
	}
	while (i < n + 1)
	{
		while (k < i)
		{
			_putchar(32);
			k++;
		}
		if (k == i)
		{
			k = 0;
		}
		_putchar('\\');
		_putchar(10);
		i++;
	}
}
