#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds a node at the begining of a list
 * @head: pointer to first element
 * @n: existing node
 * Return: linked lists
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
