#include "lists.h"
/**
 * sum_dlistint - adds data in a dlinked list
 * @head: pointer to the first node
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
	{
		return (sum);
	}
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
