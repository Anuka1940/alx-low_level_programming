/*
 *_memcpy-  function that copies memory area
 *@dest: pointer to destination
 *@src: pointer to source
 *
 *Return: return dest always
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

