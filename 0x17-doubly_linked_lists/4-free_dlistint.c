#include "lists.h"

/**
 * free_dlistint - free up memory
 * @head: head pointer
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		tp = head;
		head = head->next;
		free(tp);
	}
}
