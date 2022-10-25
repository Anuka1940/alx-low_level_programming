#include "main.h"
/**
*print_rev- print in reverse
*@s: print strings
*
*/
void print_rev(char *s)
{
    char *n = s;

    int i = 0;

    while (*(n + i) != '\0')
    {
        i++;
    }
    i = (i - 1);

    while (i >= 0)
    {
        _putchar(*(n+i));
        i--;
    }
        _putchar(10);
}
