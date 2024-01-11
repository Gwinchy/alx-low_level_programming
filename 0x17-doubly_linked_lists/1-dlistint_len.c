#include "lists.h"
/**
 * dlistint_len - function that prints linked lists
 * @h: pointer to the head of the struct
 * Return: linked lists , count
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
