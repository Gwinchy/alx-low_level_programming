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

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 != len2)
	{
		return (-1);
	}
	for (i = 0; i < len1; i++)
	{
		if (s1[i] != s2[i])
		{
			return (-1);
		}
	}
	return (0);
}
