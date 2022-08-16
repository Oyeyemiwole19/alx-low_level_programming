#include "lists.h"
/**
 * listint_len - Returns the number of elements
 * in a linked list
 * @h: pointer to head of the listint_t list
 * Return: the number elements int he listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
