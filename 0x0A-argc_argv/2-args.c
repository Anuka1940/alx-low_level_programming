#include "main.h"
/**
 *main- fuction that allow external inputs
 *@argc: it counts the number of arg inputed
 *@argv: pointer to argc
 *
 *Return: return int value always
 */
int main(int argc, char *argv[])
{
	int k, i;

	for (i = 0; i < argc; i++)
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			_putchar (argv[i][k]);
			k++;
		}
		_putchar ('\n');
	}
	return (0);
}
