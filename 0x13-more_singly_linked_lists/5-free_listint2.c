#include "lists.h"
/**
 * free_listint2 - frees lists and sets head to null
 * @head: pointer to first object
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (*head == NULL)
	{
		return;
	}
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;	
}
