#include <string.h>
#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * free_list - this frees the  list_t list
 * @head: pointer to the  head of linked list
 * Return: nothing;
 **/
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		next = head->next;
		free(head);
		head = next;
	}
}
