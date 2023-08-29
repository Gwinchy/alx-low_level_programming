#include "lists.h"
/**
 * sum_listint - adds all the values of a list
 * @head: pointer to the first element
 * Return: sum of values in a list
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
		return (sum);
	}
	return (0);
}
