#include "main.h"
int main(int argc, char *argv[])
{
	int fileFrom, fileTo;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fileFrom = open(
