#include "main.h"
#include <stdio.h>
/**
 * print_rev- prints the reverse of string s
 * @s: string to be printed in reverse
 * Return: void
 */
void print_rev(char *s)
{
	if (s == NULL)
		return;
	int length = 0;
	char *current = s;

	while (*current != '\0')
	{
		length++;
		current++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
