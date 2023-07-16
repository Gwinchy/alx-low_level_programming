# include <stdio.h>
/**
 * main - Starting point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			if (x != '8' || y != '9'
				{
				putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
