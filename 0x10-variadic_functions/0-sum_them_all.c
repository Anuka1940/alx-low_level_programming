#include "variadic_functions.h"
/**
 *sum_them_all- sum variables passed
 *@n: numbers of variables passed
 *
 *Return: return sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);

	for (; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);

}
