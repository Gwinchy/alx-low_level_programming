#include "main.h"
/**
 * _memset - function that fills memory
 * @s: pointer to the memory area being filled
 * @b: the constant byte to fill the memory with
 * @n: the number of bytes to be filled
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
