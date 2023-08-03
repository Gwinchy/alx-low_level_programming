#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - function that returns length of a string
 * @s: string under processing
 * strlen - function that returns length os a string
 * Return: length os string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
