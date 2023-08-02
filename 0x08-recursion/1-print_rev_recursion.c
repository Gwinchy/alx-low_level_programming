#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	while (*s == '\0')
	{
		putchar('\n');
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
