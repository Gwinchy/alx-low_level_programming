#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to be appended
 * @text_content: text to append
 * Return: 1 0n success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytesWritten = write(file, text_content, strlen(text_content));
		if (bytesWritten < 0)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
