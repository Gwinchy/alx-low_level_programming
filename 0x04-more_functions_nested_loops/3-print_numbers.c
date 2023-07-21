#include "main.h"
#include <stdio.h>
/**
 * print_numbers(void)-  prints numbers from 0 to 9
 * _putchar- used to print output to screen
 * Return: Returns the output of the function
 */
void print_numbers(void)
{
	int r;

	for (r = 0; r < 10; r++)
	{
		putchar(r);
	}
	{
		putchar('\n');
	}
}
