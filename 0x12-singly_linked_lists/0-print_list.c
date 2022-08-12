#include "lists.h"
/**
 * print_list- prints all the elements of a linked list
 * @h: singly linked list
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nelem++;
		h = h->next;
	}
	return (nelem);
}
