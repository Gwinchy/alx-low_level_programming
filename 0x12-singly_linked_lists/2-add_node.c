#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and added to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lk;

	if (str == NULL)
	{
		return (NULL);
	}

	lk = malloc(sizeof(list_t));
	if (lk == NULL)
	{
		return (NULL);
	}
	lk->str = strdup(str);
	if (lk->str == NULL)
	{
		free(lk);
		return (NULL);
	}
	lk->len = strlen(str);
	lk->next = *head;
	*head = lk;
	return (lk);
}
