#include "main.h"
#include <stdio.h>
/**
 * _calc_sqrt - helper function to calc sqroot
 * @n: int under processing
 * @guess: current guess for square root
 * Return: sqroot of n if found, -1 if otherwise
 */
int _calc_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_calc_sqrt(n, guess + 1));
	}
}
/**
 * _sqrt_recursion - function that returns square root
 * @n: integerunder processing
 * Return: -1 if no square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_calc_sqrt(n, 1));
	}
}
