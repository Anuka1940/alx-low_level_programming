#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *_strdup- pointer to a pointer
 *@str: pointer to a string
 *
 *Return: return p1 or NULL
 */
char *_strdup(char *str)
{
	char *p1, *p2 = str;
	int i, j;

	p1 = malloc(sizeof(char) * strlen(str));
	if (str == NULL)
	{
		return(NULL);
	}
	if (p1 == NULL)
	{
		return (NULL);
	}
	i = 0, j = 0;
	while (p2[j] != '\0')
	{
		p1[i] = p2[j];
		i++;
		j++;
	}
	return (p1);
}

