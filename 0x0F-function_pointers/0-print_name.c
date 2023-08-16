#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that prints a name
 *
 * @name: name to be printed
 *
 * @f: pointer to the string name
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		putchar(*name);
		name++;
	}
	putchar('\n');
	f(name);
}
