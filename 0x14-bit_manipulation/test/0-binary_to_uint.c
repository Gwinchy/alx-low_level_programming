#include "main.h"
/**
 * binary_to_uint - converts a number to its binary state
 * @b: number to be converted
 * Return: A binary number or null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int power;
	char c;
	int i;

	result = 0;
	power = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		c = b[i];
		if (c != '0' && c != '1')
		{
			return (0);
		}
		if (c == '1')
		{
			result += (1 << power);
			power++;
		}
	}
	return (result);
}
