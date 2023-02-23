#include "main.h"

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0 && i != 0)
	{
		_putchar(s[i]);
		i--;
	}
}
