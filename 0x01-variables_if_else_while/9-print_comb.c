# include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '8'; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
for (x = '9')
	putchar('9');
	return (0);
}
