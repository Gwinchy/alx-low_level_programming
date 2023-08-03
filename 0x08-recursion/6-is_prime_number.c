#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function that returns 1 if number is prime
 * @n: integer to be processed
 * Return: 1 if n is prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	int prime = 1;

	if (n <= 1)
	{
		return (0);
	}
	int i;

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
		return (prime);
}
