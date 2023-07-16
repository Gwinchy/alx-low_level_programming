# include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x <= '8')
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
