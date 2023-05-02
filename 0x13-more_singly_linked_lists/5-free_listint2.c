#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: Double pointer to the first node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
