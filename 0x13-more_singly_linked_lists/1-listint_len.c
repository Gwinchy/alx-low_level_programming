#include "lists.h"
#include <stdio.h>
/**
 * listint_len - prints number nodes
 * @h: pointer to the first element of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
