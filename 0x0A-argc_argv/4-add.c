#include <stdlib.h>
#include <stdio.h>
/**
 * main - starting point
 *
 * @i: iterator
 *
 * @result: to store added sum
 *
 * Return: Always 0 (Success)
 * 1 if fail
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	int i;
	int result;
	int num;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
	}
		printf("%d\n", result);
		return (0);
}
