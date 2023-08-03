#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be pri nted in reverse
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	putchar(*s);
	_print_rev_recursion(s + 1);
}
