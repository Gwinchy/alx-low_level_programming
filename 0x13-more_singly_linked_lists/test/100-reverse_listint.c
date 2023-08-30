#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the pointer of the first object
 * Return: linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *previous;
	listint_t *next;

	current = *head;
	previous = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}
