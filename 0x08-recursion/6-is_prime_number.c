#include "main.h"
#include <stdio.h>
/**
 * checker - function that checks recursively the
 * input from is_prime_number
 *
 * @n: number to checker
 * @base: base number to check
 *
 * Return: 1 if n is prime, else return 0 otherwise
 */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
	{
		return (0);
	}
	else if (n == base - 1)
	{
		return (1);
	}
	else if (base > n)
	{
		return (checker(n + 1, base));
	}
	return (1);
}
/**
 * is_prime_number - function that checks if
 * a number is prime
 *
 * @n: input parameter to check
 *
 * Return: 1 if n is prime, else return 0 otherwise
 */
int is_prime_number(int n)
{
	return (checker(2, n));
}
