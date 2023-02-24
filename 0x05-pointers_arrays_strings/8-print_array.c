#include "main.h"
#include <stdio.h>
/**
 * print_array- print nth elements of an array
 * @a: pointer to the first element on the array
 * @n: number of element to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
