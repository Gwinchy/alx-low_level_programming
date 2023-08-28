#include "lists.h"
/**
 * print_listint - Prints linked lists
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("(null)\n");
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
