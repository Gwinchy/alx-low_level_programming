#include "lists.h"
/**
 * print_dlistint - function that prints linked lists
 * @h: pointer to the head of the struct
 * Return: linked lists , count
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	printf("-> %lu Elements\n", count);
	return (count);
}
