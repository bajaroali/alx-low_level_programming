#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * _strnlen - this returns length of a string
 * @s: string to count
 * Return: lenth of the string
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
 * add_node - function that adds new node at the beginning of a linked list
 * @head: address of the beginning of the string
 * @str: the string to add to the new node
 * Return: no. of nodes in a linked list
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strnlen(str);
	new->next = *head;

	*head = new;
	return (new);
}
