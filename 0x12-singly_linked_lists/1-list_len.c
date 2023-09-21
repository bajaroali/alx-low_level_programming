#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns  number of elements in a linked list
 * @h: pointer to the  linked list
 * Return: no of nodes in a linked list
 **/
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (list_len(h->next) + 1);
	return (1);
}
