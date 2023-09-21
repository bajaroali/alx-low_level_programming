#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * _strnlen - this returns the length of string
 * @s: string to count
 * Return: the length of a string
 **/
int _strnlen(const char *s)
{
	int i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node_end - this adds a new node at end of a linked list
 * @head: address of the  beginning of a string
 * @str: string to add to the new node
 * Return: the address of new element, NULL otherwise
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *next;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strnlen(str);
	new->next = NULL;

	next = *head;

	if (next == NULL)
	{
		*head = new;
		return (new);
	}

	while (next->next != NULL)
		next = next->next;

	next->next = new;
	return (new);
}
