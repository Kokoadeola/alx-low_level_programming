#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the node of a listint_t list
 * @head: head of a list.
 *
 * Return: The head node data n, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;
	int node;

	if (*head == NULL)
		return (0);

	node_to_delete = *head;
	*head = node_to_delete->next;
	node = node_to_delete->node;
	free(node_to_delete);

	return (node);
}
