/**
*_strcat- concatenate two strings
*@dest: pointer to string one
*@src: pointer to string two
*
*Return: *dest always
*/
char *_strcat(char *dest, char *src)
{
    char *ds = dest;
    char *sc = src;

    while (*ds != '\0')
    {
        ds++;
    }
    while (*sc != '\0')
    {
        *ds = *sc;
        ds++;
        sc++;
    }
        *ds = '\0';
        return(dest);
}