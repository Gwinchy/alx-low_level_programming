#include "lists.h"
/**
 * get_nodeint_at_index - retreives the index of a list
 * @head: pointer to the first element of the list
 * @index: position of struct to return
 * Return: value of nth list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int position = 0;

	while (head != NULL)
	{
		if (position == index)
		{
			return (current);
		}
		current = head;
		current = current->next;
		position++;
	}
	return (NULL);
}
