#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - check the code
 * @filename:f
 * @text_content:s
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fb;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fb = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fb == -1)
	{
		printf("Faild to open");
		return (-1);
	}
	bytes_written = write(fb, text_content == NULL ? "" : text_content, text_content == NULL ? 0: strlen(text_content));
	if (bytes_written == -1)
	{
		printf("Faild to write");
		close(fb);
		return (-1);
	}
	close(fb);
	return (1);
}
