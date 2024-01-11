#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the beginning
 * @head: dlistint header pointer
 * @n: data in the node
 * Return: address to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *temp;

	if ((head) == NULL)
	{
		return (NULL);
	}
	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		end->prev = NULL;
		*head = end;
		return (end);
	}
	temp = *head;
	while (temp->next != NULL)
		{
			temp = temp->next;
		}
	temp->next = end;
	end->prev = temp;
	return (end);
}
