/**
*_strlen - count the size of a string
*@s: a pointer of type char
*
*Return: length of strings
*/
int _strlen(char *s)
{
        char *p = s;
        int count = 0;
        int i = 0;

        while (*(p + i) != '\0')
        {
                count++;
                i++;
        }
        return (count);
}
