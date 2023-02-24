#include "main.h"
/**
 * puts_half- print out half a string only
 * @str: pointer to a string
 */

void puts_half(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	if (count % 2 == 0)
		i = count / 2;
	else
		i = (count + 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
