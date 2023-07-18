# include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(char letter);
print_alphabet(char letter)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
	}
	int main(void)
	{
		print_alphabet('a');
		return (0);
	}
