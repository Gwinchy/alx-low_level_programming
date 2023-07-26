#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *strncpy- function that concatenates two strings using strcpy command
 * @src: argument string to be appended
 * @dest: argument to be appended
 * @n: number of copies
 * Return: dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++
	}
	return (dest);
}
