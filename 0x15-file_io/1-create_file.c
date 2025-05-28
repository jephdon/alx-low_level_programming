#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file and writes text content to it
 * @filename: The name of the file to create
 * @text_content: The NULL-terminated string to write to the file
 *
 * Return: 1 on Success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;			/* File descriptor */
	ssize_t n_written;
	mode_t mode = 0600; /* Premissions: rw------ */

	if (filename == NULL)
		return (-1);
	/* Open the file and set permissions */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	/* Write text_content only if it's not NULL */
	if (text_content != NULL)
	{
		n_written = write(fd, text_content, strlen(text_content));
		if (n_written == -1 || (size_t)n_written != strlen(text_content))
		{
			close(fd);
			return (-1); /* Write failed */
		}
	}
	close(fd);
	return (1);
}
