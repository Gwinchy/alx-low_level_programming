#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 *
 * @argc: argument counter
 *
 * @argv: argument value pointer
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
