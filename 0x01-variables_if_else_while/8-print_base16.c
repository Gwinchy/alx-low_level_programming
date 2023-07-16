# include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	for (r = '1'; r < '10'; r++)
	{
		putchar(r+ '0');
	}
	for (r = '1'; r < '6'; r++)
	{
		putchar(r+ 'a');
	}
	putchar('\n');
	return (0);
}
