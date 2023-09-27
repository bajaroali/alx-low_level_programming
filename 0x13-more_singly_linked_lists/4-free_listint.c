#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a singly linked list.
 * @head: the pointer to head of linked list.
 *
 * Return: No return.
 */

void free_listint(listint_t *head)
{
	/* go to the end of the list then start freeing from there */

	/* we have reached the end of the list */
	if (head == NULL)
		return;
	/* free everything else */
	free_listint(head->next);
	/* then free head */
	free(head);
	/* elegante, eh? muy bien. 👏*/
}
