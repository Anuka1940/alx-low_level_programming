#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat- concantinate two strings
 *@s1: pointer to string one
 *@s2: pointer to string two
 *
 *Return: return p1 or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p1, *p2 = s1, *p3 = s2;
	unsigned int i, j, k;

	p1 = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (p1 == NULL)
	{
		return (NULL);
	}
	i = 0, j = 0;
	while (p2[j] != '\0')
	{
		p1[i] = p2[j];
		i++, j++;
	}
	if (p2[j] == '\0')
	{
		k = 0;
		while (p3[k] != '\0')
		{
			p1[i] = p3[k];
			i++;
			k++;
		}
	}
	p1[i] = '\0';
	return (p1);
}



