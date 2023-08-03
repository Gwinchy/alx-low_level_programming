#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function that returns 1 if number is prime
 * @n: integer to be processed
 * @i: int to check divisibility
 * Return: 1 if n is prime and 0 if otherwise
 */
int is_prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
