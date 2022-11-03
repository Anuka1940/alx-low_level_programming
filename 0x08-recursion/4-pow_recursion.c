/**
 *_pow_recursion- a function value of power of x to y
 *@x: the constant variable
 *@y: the variable that changes
 *
 *Return: value of power of x to y always
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
