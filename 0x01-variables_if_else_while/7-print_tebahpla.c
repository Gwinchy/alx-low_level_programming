# include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
		putchar(k);
	putchar('\n');
	return (0);
}
