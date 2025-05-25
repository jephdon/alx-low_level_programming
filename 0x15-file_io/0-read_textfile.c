#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a file andprints it to POSIX stdout
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print
 * or 0 if th efunction fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;			/* File descriptor */
	ssize_t n_read, n_written;
	char *buf;		/* Buffer to hold the file content */

	if (filename == NULL)
		return (0);
	/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* Allocate a buffer to hold the letters */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);	/* Memory allocation failed */
	}
	/* Read from the file into the buffer */
	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		close(fd);
		return (0);	/* Read failed */
	}
	/* Write the buffer to stdout */
	n_written = write(STDOUT_FILENO, buf, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buf);
		close(fd);
		return (0); /* Wrte failed or didn't write all bytes */
	}
	/* Clean up and return the number of letters printed */
	free(buf);
	close(fd);
	return (n_read);
}
