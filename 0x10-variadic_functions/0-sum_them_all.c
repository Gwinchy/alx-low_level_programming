#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that adds all arguments
 *
 * @n: integer argument
 *
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	int i, sum = 0;

	va_start(list, n);

	if  (i == 0)
	{
		return (0);
	}
	for (i = 0; i < (int)n; i++)
	{
		int x = va_arg(list, int);

		sum += x;
	}
	return (sum);
}
