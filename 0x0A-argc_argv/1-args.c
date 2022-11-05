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
	int n = argc - 1;

	_putchar(n + '0');
	_putchar('\n');
	return (0);
}
