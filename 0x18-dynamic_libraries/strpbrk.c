
#include "main.h"
/**
 *_strpbrk- function that searches a string for any of a set of bytes
 *@s: pointer to source string
 *@accept: pointer to second string
 *
 *Return: return (s + i)
 */
char *_strpbrk(char *s, char *accept)
{
        int i = 0;
        int j;

        while (s[i] != '\0')
        {
                j = 0;
                while (accept[j] != '\0')
                {
                        if (accept[j] == s[i])
                        {
                                return ((s + i));
                        }
                        j++;
                }
                i++;
        }
        return (NULL);
}
