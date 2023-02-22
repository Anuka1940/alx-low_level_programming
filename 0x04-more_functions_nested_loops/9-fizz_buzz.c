#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print from 1 to 10, print for Fizz multiple of 3
 * and Buzz for multiple of 5
 * and FizzBuzz for multiple of both 3 & 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", i);
		}
		putchar(' ');
		i++;
	}
	printf("\n");
	return (0);
}
