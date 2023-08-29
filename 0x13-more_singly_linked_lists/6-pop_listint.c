#include "lists.h"
/**
 * pop_listint - removes the head of the node
 * @head: pointer to the first element in the list
 * Return: 0 if empty or first data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	n = temp->n;

	free(temp);
	return (n);
}
