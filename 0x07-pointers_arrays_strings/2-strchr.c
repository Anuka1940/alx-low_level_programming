/**
 *_strchr- locate a character in a string
 *@s: pointer to a string
 *@c: character to be located
 *
 *Return: return pointer s always
 */
#include "main.h"
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
	}
	if (c == '\0')
		return ((s + i_));
	return (NULL);
}
