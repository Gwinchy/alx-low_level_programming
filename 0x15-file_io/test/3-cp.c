#include "main.h"
/**
 * main - starting point
 * @argc: argument counter
 * @argv: argument vector
 * Return: !lways 0 Success
 */
int main(int argc, const char *argv[])
{
	int file_from, file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytesRead;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		return (98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		return (99);
	}
	while ((bytesRead = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, bytesRead) != bytesRead)
		{
			close(file_from);
			close(file_to);
		}
	}
	if ((close(file_from) | close(file_to)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		return (100);
	}
	return (0);
}
