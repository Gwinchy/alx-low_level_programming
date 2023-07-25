#include "main.h"
#include <stdio.h>
/**
* puts_half - function that prints half of a string
*
* @str: string input parameter
*
* Return: Half string inputs
*/
void puts_half(char *str)
{
int a, n, len;

len = 0;

for (a = 0 ; str[a] != '\0' ; a++)
len++;
n = (len / 2);

if ((len % 2) == 1)
n = ((len + 1) / 2);
for (a = n ; str[a] != '\0' ; a++)
putchar(str[a]);
putchar('\n');
}
