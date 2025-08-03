#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies file content
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buf[1024];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], 0);
	if (fd_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_to = open(argv[2], 577, 0664);
	if (fd_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((r = read(fd_from, buf, 1024)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (r == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (close(fd_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
