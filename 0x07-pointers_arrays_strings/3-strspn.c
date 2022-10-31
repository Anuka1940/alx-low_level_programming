/**
 *_strspn-  function that gets the length of a prefix substring
*@s: pointer to string source
*@accept: pointer to a second string
*
*Return: always return unsigned int
*/
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int count = 0, notcount = 0;

	while (s[i] != '\0')
	{
		j = 0;
		notcount = count;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			count++;
			j++;
		}
		if (notcount == count)
			break;
		i++;
	}
	return (count);
}
