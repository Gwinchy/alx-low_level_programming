#include "main.h"
int main(int argc, char *argv[])
{
	int fileFrom, fileTo;
	ssize_t bytesRead, bytesWritten;
	char buffer;
	const char from, to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	from = argv[1];to = argv[2];
	fileFrom = open(from, O_RDONLY);
		if (filefrom == -1)
		{
			handleError(98, "Can't read from file");
		}
	fileTo = open(to, O_WRONLY | O_CREAT | O_TRUNC);
	if (fileTo == -1)
	{
		close(fileFrom);
		handleError(99, "Can't write to file");
	}
	while (bytesRead = read(fileFrom, buffer, BUFFER_SIZE) > 0)
	{bytesWritten = write(fileTo, buffer, bytesRead);
		if (bytes_written != bytes_read)
		{
			close(fileFrom);
			close(fileTo);
			handleError(99, "Can't write to file");
		}
	}
	if (bytesRead == -1)
	{
		close(fileFrom);
		close(fileto);
		handleError(98, "Can't read from file");
	}
	if (close(fileFrom) == -1 || close(fileTo) == -1)
	{
		handleError(100, "Can't close file");
	}
	return (0);
}
