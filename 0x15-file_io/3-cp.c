#include "main.h"
/**
 * main - used to copy a file to another file
 * @argc: file to copy to
 * @argv: file to copy from
 * Return:  0 always
 */
int main(int argc, char *argv[])
{
	char buffer[1024];

	int fd_from, fd_to;

	ssize_t bytesToWrite, byte_read;

	fd_from = open(argv[1], O_RDONLY);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	byte_read = 1024;

	if (byte_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (byte_read == 1024)
	{
		byte_read = read(fd_from, buffer, 1024);

		bytesToWrite = write(fd_to, buffer, byte_read);

		if (bytesToWrite == -1)
		{

			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't close fd");
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "%s\n", "Error: Can't close fd");
		exit(100);
	}
	return (0);
}
