# include <stdio.h>
/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		print_alphabet();
		return (0);
}
