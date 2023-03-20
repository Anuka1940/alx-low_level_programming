#include "main.h"
/**
 *_memset- it fills memory with a constant byte
 *@s: pointer to a constant byte b
 *@b: a constant byte of type char
 *@n: size of memory
 *
 *Return: return char s always
*/
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        i = 0;
        while (i < n)
        {
                s[i] = b;
                i++;
        }
        return (s);
}
