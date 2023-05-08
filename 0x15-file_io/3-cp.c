#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - prints error and exits
 * @error_code: The code for the error
 * @message: The message to be printed
 * @file_name: File whose contents are copied
 * @fd: Return value for open filename
 */

void print_error_exit(int error_code,
		const char *message, const char *file_name, int fd)
{
	dprintf(STDERR_FILENO, message, file_name);
	if (fd != -1)
	{
		close(fd);
	}
	exit(error_code);
}

/**
 * main - copies the content of another file
 * @argc: Number of arguments
 * @argv: Arguments for main function
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	struct stat file_stat;

	if (argc != 3)
		print_error_exit(97, "Usage: cp file_from file_to\n", NULL, -1);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_exit(98, "Error: Can't read from file %s\n", file_from, -1);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		print_error_exit(99, "Error: Can't write to %s\n", file_to, fd_from);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error_exit(99, "Error: Can't write to %s\n", file_to, fd_from);
		if (bytes_written < bytes_read)
			print_error_exit(99, "Error: Short write to %s\n", file_to, fd_from);
	}
	if (bytes_read == -1)
		print_error_exit(98, "Error: Can't read from file %s\n", file_from, fd_to);
	if (close(fd_from) == -1)
		print_error_exit(100, "Error: Can't close fd %d\n", NULL, fd_from);
	if (close(fd_to) == -1)
		print_error_exit(100, "Error: Can't close fd %d\n", NULL, fd_to);
	if (stat(file_to, &file_stat) == -1)
		print_error_exit(99, "Error: Can't get file status of %s\n", file_to, -1);
	if ((file_stat.st_mode & S_IFMT) == S_IFREG && file_stat.st_nlink == 1)
	{
		if (chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
			print_error_exit(99,
					"Error: Can't change file permissions of %s\n", file_to, -1);
	}
	return (0);
}

