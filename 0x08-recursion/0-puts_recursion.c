#include "main.h"
/**
 *_puts_recursion- print out a string with new line
 *@s: pointer to a sstring
 *
 */
void _puts_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	 _putchar(*s);
	_puts_recursion((s + i));
}
