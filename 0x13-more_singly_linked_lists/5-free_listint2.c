#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: A pointer to the address of the head of the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *frlist;

	if (head == NULL)
		return;
	while (*head)
	{
		frlist = (*head)->next;
		free(*head);
		*head = frlist;
	}
	head = NULL;
}
