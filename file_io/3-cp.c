#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define B 1024

/**
 * main - copy file
 * @a: arg count
 * @v: arg values
 * Return: 0 on success
 */
int main(int a, char *v[])
{
	int f1, f2, r, w;
	char b[B];

	if (a != 3)
	{ dprintf(2, "Usage: cp file_from file_to\n"), exit(97); }

	f1 = open(v[1], O_RDONLY);
	if (f1 < 0)
	{ dprintf(2, "Error: Can't read from file %s\n", v[1]), exit(98); }

	f2 = open(v[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 < 0)
	{ dprintf(2, "Error: Can't write to %s\n", v[2]), close(f1), exit(99); }

	while ((r = read(f1, b, B)) > 0)
		if ((w = write(f2, b, r)) != r)
		{ dprintf(2, "Error: Can't write to %s\n", v[2]), close(f1), close(f2), exit(99); }

	if (r < 0)
	{ dprintf(2, "Error: Can't read from file %s\n", v[1]), close(f1), close(f2), exit(98); }

	if (close(f1) < 0)
	{ dprintf(2, "Error: Can't close fd %d\n", f1), exit(100); }

	if (close(f2) < 0)
	{ dprintf(2, "Error: Can't close fd %d\n", f2), exit(100); }

	return (0);
}
