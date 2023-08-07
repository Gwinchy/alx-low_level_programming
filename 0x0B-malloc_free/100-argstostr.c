#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector (array of strings).
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++; /* Account for newline character */
	}

	/* Allocate memory for the concatenated string */
	concatenated = malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	/* Copy each argument and add newline */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated[k++] = av[i][j];
		concatenated[k++] = '\n'; /* Add newline */
	}
	concatenated[k] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}

