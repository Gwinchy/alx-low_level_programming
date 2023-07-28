#include "main.h"
#include <stdio.h>
/**
 * *_strncat- function that concatenates two strings
 * @src: argument to be concatenated
 * @dest: argument to be concatenated with src
 * @n: byte of strings
 * Return: dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
		while (dest[a] != '\0')
		{
			a++;
		}
	b = 0;
		while (b < n && src[b] != '\0')
		{
			dest[a] = src[b];
			a++;
			b++;
		}
		dest[a] = '\0';
		return (dest);
}
