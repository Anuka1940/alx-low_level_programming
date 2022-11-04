#include "main.h"
/**
 *square- check for the perfect square of n
 *@x: square root of n
 *@n: the variable to calculate its square root
 *
 *Return: x or -1 always
 */
int square(int x, int n)
{
	if (x > (n / 2) && x != n)
		return (-1);
	if (x * x == n)
		return (x);
	return (square(x + 1, n));
}
/**
 *_sqrt_recursion- check for the perfect square of n
 *@n: the variable to calculate its square root
 *
 *Return: x or -1 always
 */
int _sqrt_recursion(int n)
{
	int x = 1;
	int r;

	r = square(x, n);
	return (r);
}

