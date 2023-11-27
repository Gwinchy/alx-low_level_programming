#include "main.h"
/**
 * read_textfile - reads a textfile and outputs to POSIX stdout
 * @filename: name of the file
 * @letters: data in the file
 * Return: 0 or actual size of readeable input
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (file == NULL)
	{
		return (0);
	}

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return(0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';
	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
	if (bytesWritten < 0)
	{
		fclose(file);
		free(buffer);
	}
	return (bytesWritten);
}
