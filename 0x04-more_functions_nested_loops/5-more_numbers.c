#include "main.h"
#include <stdio.h>
/**
 * more_numbers- function that prints 0 to 14 10 times
 * @c- integer to be iterated on
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		putchar('\n');
		for (c = 0; c <= 14; c++)
		{
			putchar(c);
		}
	}
	putchar('\n');
}
