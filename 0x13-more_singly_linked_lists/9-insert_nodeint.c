#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at listint_t linked list
 * @head: Pointer to the first node of the list
 * @idx: index where the new node is added
 * @n: Value to insert in the new node
 *
 * Return: Address of the new node, or NULL if it failed to add the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *nwnod, *temp;

	if (!head)
		return (NULL);

	nwnod = malloc(sizeof(listint_t));
	if (!nwnod)
		return (NULL);

	nwnod->n = n;

	if (idx == 0)
	{
		nwnod->next = *head;
		*head = nwnod;
		return (nwnod);
	}

	temp = *head;

	while (i < idx - 1)
	{
		if (!temp)
		{
			free(nwnod);
			return (NULL);
		}
		temp = temp->next;
		i++;

	}
	nwnod->next = temp->next;
	temp->next = nwnod;

	return (nwnod);

}
