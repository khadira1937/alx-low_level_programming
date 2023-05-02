#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: Double pointer to the first node of the list
 *
 * Return: The data of the deleted node or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nod;

	if (*head == NULL)
		return (0);
	temp = *head;
	nod = temp->n;

	*head = (*head)->next;
	free(temp);
	return (nod);
}
