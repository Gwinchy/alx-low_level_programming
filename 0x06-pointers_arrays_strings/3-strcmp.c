#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp- functions that compares two strings
 *
 * @s1: argument one to be compared
 *
 * @s2: argument to be compared
 *
 * Return: 0 if they are similar
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
