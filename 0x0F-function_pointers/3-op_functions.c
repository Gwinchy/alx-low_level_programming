#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds integers
 * @a: first int argument
 * @b: second int argument
 * Return: Result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts integers
 * @a: first int argument
 * @b: second int argument
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies integers
 * @a: first int argument
 * @b: second int argument
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides integers
 * @a: first int argument
 * @b: second int argument
 * Return: Result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - does modulus of integers
 * @a: first int argument
 * @b: second int argument
 * Return: Result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
