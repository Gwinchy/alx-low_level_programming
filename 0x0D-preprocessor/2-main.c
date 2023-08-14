#include <stdlib.h>
#include <stdio.h>
#define __FILE__
/**
 * main - starting point
 * @FILE: name of the file
 * Return: Always 0 (Success)
 */
int main()
{
	putchar(__FILE__);
	__FILE__++;
	putchar('\n');
	return (0);
}
