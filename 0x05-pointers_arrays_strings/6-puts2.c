#include "main.h"
/**
 * puts2- print even index of string
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar(10);
}