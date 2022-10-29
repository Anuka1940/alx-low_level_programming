/**
 *string_toupper- rturn all lower case latter to upper case latter
 *@a: pointer to string
 *
 *Return: a always
 */
char *string_toupper(char *a)
{
	int i = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = (a[i] - 32);
		}
	}
	return (a);
}
