#include "main.h"

/**
 * read_textfile - reads a file and prints it to the POSIX
 * standard output
 * @filename: The file to be used
 * @letters: No of letters it should read / print
 *
 * Return: No of letters it could read/ print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t total_read = 0, written, n_read;
	char buffer[BUFSIZ];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((size_t)total_read < letters
			&& (n_read = read(fd, buffer, BUFSIZ)) > 0)
	{
		written = write(STDOUT_FILENO, buffer, n_read);
		if (written < 0 || written != n_read)
		{
			close(fd);
			return (0);
		}
		total_read += written;
	}
	if (n_read < 0)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (total_read);
}
