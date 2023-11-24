#include "main.h"
/**
 * print_binary - converts int to binary
 * @n: integer argument
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	int p;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	p = n & 1;
	putchar(p + '0');
}
