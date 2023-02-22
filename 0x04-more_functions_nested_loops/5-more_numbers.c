#include "main.h"
/**
 *more_numbers- print digit from 1 to 14
*
*/

void more_numbers(void)
{
	int i = 0, g, j, l = 1;

	while (i <= 9)
	{
		j = 0;
		g = 48;
		l = 0;
		while (j < 15 && g <= 58)
		{
			if (l >= 10)
			{
				_putchar(49);
				if (l == 10)
				{
					g = 48;
				}
			}
			_putchar(g);
			g++;
			l++;
			j++;
		}
	i++;
	_putchar(10);
	}
}
