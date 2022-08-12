#include "lists.h"
#include <string.h>
/**
 * add_node - add new node at begining of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	new->next = (*head);
	(*head) = n;
	return (head);
}
