#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: Input string
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The file to be appended the text
 * @text_content: Text to be appended
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t len;

	if (filename == NULL || text_content == NULL)
		return (-1);
	fp = fopen(filename, "a");
	if (fp == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		if (fwrite(text_content, sizeof(char), len, fp) != len)
		{
			fclose(fp);
			return (-1);
		}
	}
	fclose(fp);
	return (1);
}

