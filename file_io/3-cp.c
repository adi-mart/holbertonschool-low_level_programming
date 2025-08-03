#include "main.h"
#include <stdio.h>
#define BUF_SIZE 1024
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits with codes on error
 */
int main(int argc, char *argv[])
{
	int file_from, fd_to, r, w;
	char buf[BUF_SIZE];

	if (argc != 3)
		return (dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), 97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	while ((r = read(file_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
			return (close(file_from), close(fd_to),
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), 99);
	}
	if (r == -1)
		return (close(file_from), close(fd_to),
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), 98);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
