#include "main.h"
#include <stdio.h>
/**
* times_table - prints the 9 times table, starting with 0
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;

			if (b == 0)
			{
				putchar(c + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');

				if (c < 10)
				{
					putchar(' ');
					putchar(c + '0');
				}
				else
				{
					putchar((c / 10) + '0');
					putchar((c % 10) + '0');
				}
			}
		}
		putchar('\n');
	}
}
