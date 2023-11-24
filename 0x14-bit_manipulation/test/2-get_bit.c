#include "main.h"
/**
 * get_bit - returns bit value at a given index
 * @n: integer to convert to binary
 * @index: bit index to return
 * Return: value at bit index or -1 on err
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = sizeof(unsigned long int) * 8;

	if (index >= bits)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
