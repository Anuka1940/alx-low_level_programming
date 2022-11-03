/**
 * _strlen_recursion- function that count the number of a string
 *@s: pointer to string
 *
 *Return: count always
 */
int _strlen_recursion(char *s)
{
	int i = 1;
	int count;

	if (s[i] == '\0')
	{
		return (1);
	}
	count = 1 +  _strlen_recursion(s + i);
	return (count);
}
