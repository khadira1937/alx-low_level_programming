#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the first node of the list
 * @index: Index of the node to return
 *
 * Return: Pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	for (i = 0; temp && i < index; i++)
		temp = temp->next;

	return (temp ? temp : NULL);
}
