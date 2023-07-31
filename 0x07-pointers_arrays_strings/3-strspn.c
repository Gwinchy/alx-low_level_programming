#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search in.
 * @accept: The substring containing acceptable bytes.
 *
 * Return: The number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int is_acceptable;
	char *initial_accept = accept;

	while (*s != '\0')
	{
		is_acceptable = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				is_acceptable = 1;
				break;
			}
			accept++;
		}
		if (!is_acceptable)
			break;
		len++;
		accept = initial_accept;
	}
	return (len);
}
