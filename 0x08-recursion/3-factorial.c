/**
 *factorial- print the factorial of a number
 *@n: integer to factorize
 *
 *Return: int of factorial always
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return n * factorial (n-1);
}
