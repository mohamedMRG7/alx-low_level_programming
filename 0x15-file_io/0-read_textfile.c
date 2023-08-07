#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - check the code
 * @filename:f
 * @letters:s
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fb;
	char *buffer;
	ssize_t read_buff;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(buffer) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fb = open(filename, O_RDONLY);
	if (fb == -1)
	{
		return (0);
	}
	read_buff = read(fb, buffer, letters);
	if (read_buff == -1)
	{
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, read_buff);
	if (bytes_written == -1)
	{
		return (0);
	}
	free(buffer);
	return (read_buff);
}
