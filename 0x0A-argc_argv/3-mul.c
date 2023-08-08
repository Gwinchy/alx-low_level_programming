#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting poing
 *
 * @argc: argument count
 *
 * @argv: argument value pointer
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc = 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
				printf("%d\n", mul);
				}
				return (0);
				}
