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
    }
    return (dest);
}