#include "main.h"
/**
 * print_line- print the a line
 * @n:the number on line to be print
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar(10);
}
