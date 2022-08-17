#include "lists.h"
/**
 * sum_listint- returns a sum of all data of n list
 * @head: A pointer to the headof the listint_t list
 * Return: if the list is empty- 0
 * otherwise the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
