#include "lists.h"
/**
 * delete_nodeint_at_index - deletes structure from index position
 * in a linked list
 * @index: position of element
 * @head: pointer to a pointer to the first element
 * Return: 1 if successful and -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int position;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	position = 0;
	while (current->next != NULL)
	{
		if (position + 1 == index)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		current = current->next;
		position = position + 1;
	}
	return (-1);
}
