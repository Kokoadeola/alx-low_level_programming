#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of the list
 * @head: head pointer
 * @n: data
 * Return: the new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	tp = *head;
	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = temp;
	temp->prev = tp;
	return (temp);
}
