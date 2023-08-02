#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion - function that prints a string
 *@s: string to be printed
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
	putchar(*s + 0);
	s++;
	}
}
