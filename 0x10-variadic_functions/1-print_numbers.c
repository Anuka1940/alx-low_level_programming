#include "variadic_functions.h"
/**
 *print_numbers- funtion that print numbs
 *@separator: pointer to a string
 *@n: size of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
