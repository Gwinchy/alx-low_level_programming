#include "main.h"
#include <stdio.h>
/**
 * _islower - checks if a character is upper or lower case
 *
 *@c: The character to be checked.
 *
 * Return: 1 if c is lower, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
