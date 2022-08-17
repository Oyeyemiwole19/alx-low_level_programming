#include "lists.h"
/**
 * pop_listint- deletes the head node of a listint_t linked list
 * @head: pointe to the address of the head
 * Return: if the linked list is empty- 0
 * otherwise- head node data is n
 */
int pop_listint(listint_t **head)
{
	listint_t *frlist;
	int ret;

	if (*head == NULL)
		return (0);
	frlist = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(frlist);
	return (ret);
}
