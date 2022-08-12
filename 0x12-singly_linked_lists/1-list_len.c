#include "lists.h"
/**
 * list_len- adds a new node at the beginning of a list_t list.
 * @h: list list_t
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
