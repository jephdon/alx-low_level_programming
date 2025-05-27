#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * main - Appends texts at the end of a file
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, exits with codes 97-100 on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t n_read, n_written;
	char buf[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH; /* rw-rw-- */

	/* Check if there are exactly 3 arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Open file_from for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* Open file_to for writing, creating if needed, truncate i exists */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	/* Read from file_from and write to file_to in chunks */
	while ((n_read = read(fd_from, buf, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buf, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	/* Check if read failed */
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	/* Close file descriptors */
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
