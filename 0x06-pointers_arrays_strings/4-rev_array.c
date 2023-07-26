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
	int temp, i;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
