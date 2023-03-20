#include "main.h"

/**
 *_strcmp- compare two string
 *@s1: pointer to string1
 *@s2: pointer to strings2
 *
 *Return: int 0 always
 */
int _strcmp(char *s1, char *s2)
{
        char *sr1 = s1;
        char *sr2 = s2;
        int i;

        for (i = 0; sr1[i] != '\0' || sr2[i] != '\0'; i++)
        {
                if (sr1[i] != sr2[i])
                {
                        return (sr1[i] - sr2[i]);
                }

        }
        return (0);
}
