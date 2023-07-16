# include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;
	char s;


	for (r = '1'; r <= '9'; r++)
	{
		putchar(r);
	}
	for (s = 'a'; s <= 'f'; s++)
	{
		putchar(r+ 'a');
	}
	putchar('\n');
	return (0);
}
