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
 * create_file - creates a file
 * @filename: Name of file to be created
 * @text_content: Text to be written on the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		written = write(fd, text_content, len);
		if (written == -1 || (size_t)written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

