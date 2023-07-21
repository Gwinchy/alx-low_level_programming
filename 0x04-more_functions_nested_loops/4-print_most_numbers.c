#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers(void)- Prints numbers from 0 to 9 without 2 qnd 4
 * putchar- prints to output
 * Return- printed output
 */
void print_most_numbers(void)
{
	int r;

	for (r = 0; r < 10; r++)
	if (r != 2 && r != 4)
	{
		putchar(r);
	}
	{
		putchar('\n');
	}
}
