#include <stdio.h>
#include <stdlib.h>
/**
*main- function that two digits
*@argc: count the number of arguments
*@argv: pointer to a sring
*
*Return: return 1 or 0 always
*/
int main(int argc, char *argv[])
{
	int i = 1, j, sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 42 || argv[i][j] > 57)
				{
				printf("error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
