#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints linked lists
 *
 * @h: pointer to the head of the linked list
 *
 * Return: number of lists and their values
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
