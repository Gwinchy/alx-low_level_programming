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

	for (r = '0'; r <= 9; r++)
		putchar(r);
	for (s = 'a'; s >= 'f'; s++)
		putchar(s);
		putchar('\n');
	return (0);
}
