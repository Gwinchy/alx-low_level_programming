#include "main.h"
#include <stdio.h>
/**
 * factorial - function that returns a factorial of a number
 * @n: integer under processing
 * Return: 1 if 0, -1 for negatives and factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
