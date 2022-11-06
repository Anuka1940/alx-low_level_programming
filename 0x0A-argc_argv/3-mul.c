#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *main- fuction that allow external inputs
 *@argc: it counts the number of arg inputed
 *@argv: pointer to argc
 *
 *Return: return int value always
 */
int main(int argc, char *argv[])
{
	int i, mul, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	printf("%d\n", mul);
	return (0);
}
