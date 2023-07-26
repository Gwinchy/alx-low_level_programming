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

	for (i = 0; s1[i] != '\0';)
	{
		i++;
	}
	for (i = 0; s2[i] != '\0';)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
		else
		{
			return (-1);
		}
}
