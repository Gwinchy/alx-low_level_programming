# include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a1, b1;

	for (a1 = 0; a1 <= 98; a1++)
	{
		for (b1 = a1 + 1; b1 <= 99; b1++)
		{
			if (b1 > a1)
			{
				putchar(a1);
				putchar(b1);
				if (a1 != 98 && b1 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
