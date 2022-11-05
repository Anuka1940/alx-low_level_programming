#include <unistd.h>
#include "main.h"
/**
*_putchar- fuction that output char and int
*@c: the fuction accepts only one parameter of type char
*
*Return: int value always
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *main- fuction that allow external inputs
 *@argc: it counts the number of arg inputed
 *@argv: pointer to argc
 *
 *Return: return int value always
 */
int main(int argc, char *argv[])
{

	_putchar(argc + '0');
	_putchar('\n');
	return (0);
}
