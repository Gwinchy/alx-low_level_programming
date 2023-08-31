#include "unistd.h"
#include "main.h"
/**
 * _putchar - writes a character to the stdout
 * @c: character to be written
 * Return: num oc chars written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
