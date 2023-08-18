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

	unsigned int i, sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(list, int);

		sum += x;
	}
	return (sum);
}
