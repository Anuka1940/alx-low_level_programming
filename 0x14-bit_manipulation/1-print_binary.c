/**
 *print_binary-convert to binary
 *@n:unsighned long int
 *
 *Return: return void always
 **/
#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned int b;
	int count = 0, left_shift;

	for (left_shift = 31; left_shift >= 0; left_shift--)
		b = n >> left_shift;
	if (b & 1)
	{
		count = 1;
		printf("1");
	}
	else
	{
		if (count == 1)
			printf("0");
	}
if (count == 0)
	printf("0");
}
