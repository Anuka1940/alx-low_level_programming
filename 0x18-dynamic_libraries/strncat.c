/**
*_strncat- concatenates two strings with a fix byte
*@dest: pointer to string one
*@src: pointer to string two
*@n: byte size to be concatenate
*
*Return: dest always
*/
char *_strncat(char *dest, char *src, int n)
{
    char *ds = dest;
    char *sc = src;
    int i;

    while(*ds != '\0')
    {
        ds++;
    }
    for(i = 0; i < n && sc[i] != '\0'; i++)
    {
        *ds = sc [i];
        ds++;
    }
    return (dest);
}
