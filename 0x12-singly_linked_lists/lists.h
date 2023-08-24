#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_s - linked list
 * @str: string in the linked list
 * @len: length of the list
 * @next: pointer to the next linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;
size_t print_list(const list_t *h);
#endif
