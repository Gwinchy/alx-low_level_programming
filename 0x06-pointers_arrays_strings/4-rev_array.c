#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array- function that reverses the content of an array
 * @a: argument to be reversed
 * @n: number of elements in the array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, temp, e;

	i = 0;
	e = n-1;
	while (i < e)
	{
		temp = a[i];
		a[i] = a[e];
		a[e] = temp;
		i++;
		e--;
	}
}
