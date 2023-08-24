#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and added to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}
	current = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
