#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks if 'c' is alphabetic characters
 *
 * @c: the character to be checked
 *
 * Return: 1 if true and 2 if false
 */
int _isalpha(int c)
{
	for (c >= 'A' && c <= 'Z' && c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
