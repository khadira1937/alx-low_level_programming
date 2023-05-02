#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a istint_t list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwnod;

	nwnod = malloc(sizeof(listint_t));
	if (nwnod == NULL)
		return (NULL);

	nwnod->n = n;
	nwnod->next = *head;
	*head = nwnod;

	return (nwnod);
}
