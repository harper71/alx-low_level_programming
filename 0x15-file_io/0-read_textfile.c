#include "main.h"
/**
 * read_textfile - reads and prints to standard output
 * @filename: used to get the file name
 * @letters: number of character to be printed
 * Return: bytes_written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = (char *)malloc(letters * sizeof(char));

	int fd;

	ssize_t bytes_read;

	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		return (0);
	}
	return (bytes_written);
}
