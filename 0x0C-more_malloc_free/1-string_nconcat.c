#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat- concantinate two strings
 *@s1: pointer to string one
 *@s2: pointer to string two
 *@n: size of n byte
 *
 *Return: return p1 or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p1, *p2, *p3;
	unsigned int i, j, k;

	p2 = s1;
	p3 = s2;
	p1 = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (p1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0, j = 0;
	while (p2[j] != '\0')
	{
		p1[i] = p2[j];
		i++, j++;
	}
	if (n < strlen(s2))
	{
		k = 0;
		while (p3[k] != '\0' && k < n)
		{
			p1[i] = p3[k];
			i++;
			k++;
		}
	}
	if (n >= strlen(s2) && p2[j] == '\0')
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



