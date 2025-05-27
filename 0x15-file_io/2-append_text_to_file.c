#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file to append to
 * @text_content: The NULL-terminated string to add at
 * the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;			/* File dsescriptor */
	ssize_t n_written;	/* Number of bytes written */
	size_t len = 0;		/* Length of text_content */

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);
	/* Open the file for writing, appending to the end */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);	/* File doesn't exist or can't open */
	if (text_content == NULL)
	{
		close(fd);
		return (1);	/* File exists, no text to add */
	}
	len = strlen(text_content);
	/* Write the text to the file */
	n_written = write(fd, text_content, len);
	if (n_written == -1 || (size_t)n_written != len)
	{
		close(fd);
		return (-1);	/* Writing failed or bytes incomplete */
	}
	close(fd);
	return (1);
}
