#include "main.h"
/**
 * _memcpy - function that copies n bytes
 * from memory area src to dest
 * @src: source of where the n bytes are
 * @dest: destination to whrer they will be copiet to
 * @n: bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
