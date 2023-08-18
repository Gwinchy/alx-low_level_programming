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

	va_start(list, n);
	va_end(list);
	int i, sum = 0;

	if  (i == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
