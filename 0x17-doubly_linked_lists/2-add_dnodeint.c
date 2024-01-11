#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning
 * @head: dlistint header pointer
 * @n: data in the node
 * Return: address to the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if ((head) == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = (*head);

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}
	(*head) = new;
	return (new);
}
