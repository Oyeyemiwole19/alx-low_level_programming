#include "list.h"
#include <stdio.h>
/**
 * print_list- prints all the elements of a list_t list.
 * @h: list list_t
 * Return: the number of node in h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			nodes++;
		h = h->next;
	}
	return (nodes);
}
