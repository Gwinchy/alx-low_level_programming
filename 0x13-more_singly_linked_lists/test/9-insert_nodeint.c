#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at an index position
 * @head: pointer to first element
 * @idx: index to position
 * @n: data segment in structure
 * Return: newnode at index or null if void
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node;
	unsigned int position = 0;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if  (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current != NULL)
	{
		if (position + 1 == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
			{
				return (NULL);
			}
			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		position = position + 1;
	}
	return (NULL);
}
