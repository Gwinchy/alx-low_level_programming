#include "main.h"
/**
 * string_toupper- function that changes to uppercase
 * @n: the strings under operation
 * Return: Always str (Success)
 */
char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}
