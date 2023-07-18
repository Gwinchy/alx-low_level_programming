#include "2-main.c"
#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char q;

		for (q = 'a'; q <= 'z'; q++)
		{
			putchar(q);
		}
		putchar('\n');
		i++;
	}
}
