#include "main.h"

/**
 * main - copies the content of a file to another file
 * if file_to already exists, truncate it
 * on the POSIX standard error
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, readed, written;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	readed = read(fd_from, buffer, 1024);
	while (readed > 0)
	{
		written = write(fd_to, buffer, readed);
		if (written < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		readed = read(fd_from, buffer, 1024);
	}

	if (readed < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %\n",
				argv[1]), exit(98);

	if (close(fd_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}

