#include "main.h"
/**
 *_print_rev_recursion- prints string on string
 *@s: pointer a *
 *
*/

void _print_rev_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return;
		_putchar ('\n');
	}
	_print_rev_recursion(s + i);
	_putchar (*s);
}
