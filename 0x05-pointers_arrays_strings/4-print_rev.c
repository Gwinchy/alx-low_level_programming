#include "main.h"
#include <stdio.h>
#include "reverse.h"
/**
 * print_rev- prints the reverse of string s
 * @s: string to be printed in reverse
 * Return: void
 */
void print_rev(char *s)
{
	rev(s);
	putchar('\n');
}
