#include "main.h"
/**
 * print_square- print square as '#'
 * @size: size of the square
 */

void print_square(int size)
{
	int i, j = 0;

	if (size > 0)
	{
		while (j < size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}


