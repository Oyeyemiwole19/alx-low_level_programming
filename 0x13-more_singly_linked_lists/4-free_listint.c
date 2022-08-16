#include "lists.h"
#include <stdlib.h>
/**
 * free_listint- free a listint_t list
 * @head: Apointer to the head of listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *frlist;

	while (head)
	{
		frlist = head->next;
		free(head);
		head = frlist;
	}
}
