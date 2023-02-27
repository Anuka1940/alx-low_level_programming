/**
*_isupper - check for uppercase latters,
*
*Return: return int always
*/
int _isupper(int c)
{
    int i;
    i = c;

    if (i >= 65 && i <= 90)
        return (1);
    else
        return (0);
}