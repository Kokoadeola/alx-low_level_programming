#include "lists.h"

/**
 * dlistint_len - length of the list
 * @h: head pointer
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t res = 0;

	while (h != NULL)
	{
		h = h->next;
		res++;
	}
	return (res);
}
