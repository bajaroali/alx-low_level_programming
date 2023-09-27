#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of a,
 * listint_t linked list.
 * @head: the pointer to head of linked list.
 *
 * Return:  sum of all data (n) of a linked list or 0 otherwise.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
