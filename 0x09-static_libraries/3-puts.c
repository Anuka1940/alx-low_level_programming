#include "main.h"
/**
*_puts- print string
*@str: pointer of type char
*/
void _puts(char *str)
{
	char *p = str;
	int i = 0;

	while (*(p + i) != '\0')
	{
		_putchar(*(p + i));
		i++;
	}
	_putchar(10);
}
