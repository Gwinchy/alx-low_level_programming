#include "main.h"
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat- function that concatenates two strings
 * @src: string to be concatenated
 * @dest: other string to be concatenated
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	dest[i] = '\0';

		return(dest);
}
