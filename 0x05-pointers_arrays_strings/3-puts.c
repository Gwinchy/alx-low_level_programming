#include "main.h"
#include <stdio.h>
/**
 * _puts- function that prints a string to the standard output
 * @str: string to be printed by the function
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}
	putchar('\n');
}
