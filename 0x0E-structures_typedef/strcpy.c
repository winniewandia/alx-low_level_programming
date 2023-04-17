/**
 * _strcpy - copies the string pointed to by src
 * to the character array pointed to by dest
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0;;i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

