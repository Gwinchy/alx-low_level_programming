#include <stdio.h>
/**
 * binary_to_uint - Converts binary num to decimal
 * @b: pointer to strings
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (*b == '\0')
	{
		return (0);
	}
	if (*b != '1' || *b != '0')
	{
		return (0);
	}
	while (*b != '\0')
	{
		result = (result << 1) + (*b - '0');
	}
	return (result);
}
