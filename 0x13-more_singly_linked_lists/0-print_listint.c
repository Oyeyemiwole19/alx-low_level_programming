#include "lists.h"
/**
 * print_listint- prints all elements of linked list
 * @h: pointer to head of the list
 * Return: The number of node in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
