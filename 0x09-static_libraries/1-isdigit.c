#include "main.h"
/**
 * _isdigit- check for digit
 *
 * @c: Arg to check
 * Return: Return (1) for digit or (0)
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
