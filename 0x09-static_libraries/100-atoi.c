#include "main.h"
int _atoi(char *s)
{
	int res = 0, i = 0, sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		res = res * 10 + s[i] - '0';
	}

	return(sign * res);
}
