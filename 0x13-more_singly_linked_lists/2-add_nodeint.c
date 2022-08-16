#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint- Adds a new node at beginning of
 * s listint_t list
 * @head: A pointer to the address of the
 * @n: The integer for the new node to contain
 * Return: if the function fails- NULL
 * otherwise return the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
