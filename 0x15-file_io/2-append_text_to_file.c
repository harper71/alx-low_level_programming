#include "main.h"
/**
 * append_text_to_file - appends a text to the file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes_appended;

	int fd = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_appended = write(fd, text_content, strlen(text_content));

		if (bytes_appended == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
