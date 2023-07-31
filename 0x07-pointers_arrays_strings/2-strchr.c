#include "main.h"
/**
 * _strchr - function that locates
 * a character in a string
 * @s: a string to search in
 * @c: the character to locate
 *
 * Return: A pointer to the first occurence of the character
 * 'c' in the string and 'NULL' if not found
 */
char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
