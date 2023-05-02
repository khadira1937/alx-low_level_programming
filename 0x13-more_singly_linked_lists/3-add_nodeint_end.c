#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: Pointer to the first node in the list
 * @n: data to insert in the new element
 *
 * Return: The address of the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nwnod;
	listint_t *temp = *head;

	nwnod = malloc(sizeof(listint_t));
	if (!nwnod)
		return (NULL);

	nwnod->n = n;
	nwnod->next = NULL;

	if (*head == NULL)
	{
		*head = nwnod;
		return (nwnod);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nwnod;

	return (nwnod);
}

