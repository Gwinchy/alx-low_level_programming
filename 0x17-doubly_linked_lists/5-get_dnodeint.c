#include "lists.h"
/**
 * get_dnodeint_at_index - returns node at index
 * @index: index argument
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	while (index > 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
