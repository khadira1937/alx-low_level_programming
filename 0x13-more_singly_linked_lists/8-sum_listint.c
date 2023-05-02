#include "lists.h"

/**
 *  sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node of the list
 *
 * Return: Sum data of the list, or 0
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
